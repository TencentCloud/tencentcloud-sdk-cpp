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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_INPUTDELETENAMELISTDATA_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_INPUTDELETENAMELISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 删除黑白名单数据业务入参
                */
                class InputDeleteNameListData : public AbstractModel
                {
                public:
                    InputDeleteNameListData();
                    ~InputDeleteNameListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取黑白名单数据ID集合
                     * @return NameListDataIdList 黑白名单数据ID集合
                     * 
                     */
                    std::vector<int64_t> GetNameListDataIdList() const;

                    /**
                     * 设置黑白名单数据ID集合
                     * @param _nameListDataIdList 黑白名单数据ID集合
                     * 
                     */
                    void SetNameListDataIdList(const std::vector<int64_t>& _nameListDataIdList);

                    /**
                     * 判断参数 NameListDataIdList 是否已赋值
                     * @return NameListDataIdList 是否已赋值
                     * 
                     */
                    bool NameListDataIdListHasBeenSet() const;

                private:

                    /**
                     * 黑白名单数据ID集合
                     */
                    std::vector<int64_t> m_nameListDataIdList;
                    bool m_nameListDataIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_INPUTDELETENAMELISTDATA_H_
