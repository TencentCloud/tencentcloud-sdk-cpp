/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_OBJDATASAEVENTPUB_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_OBJDATASAEVENTPUB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/ListDataSaEventPub.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DataSaEventPub
                */
                class ObjDataSaEventPub : public AbstractModel
                {
                public:
                    ObjDataSaEventPub();
                    ~ObjDataSaEventPub() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Count
                     * @return Count Count
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Count
                     * @param _count Count
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取List
                     * @return List List
                     * 
                     */
                    std::vector<ListDataSaEventPub> GetList() const;

                    /**
                     * 设置List
                     * @param _list List
                     * 
                     */
                    void SetList(const std::vector<ListDataSaEventPub>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * Count
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * List
                     */
                    std::vector<ListDataSaEventPub> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_OBJDATASAEVENTPUB_H_
