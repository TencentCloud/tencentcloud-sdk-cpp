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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_SADIVULGEDATAQUERYPUBLIST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_SADIVULGEDATAQUERYPUBLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/SaDivulgeDataQueryPub.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 自定义泄露事件列表
                */
                class SaDivulgeDataQueryPubList : public AbstractModel
                {
                public:
                    SaDivulgeDataQueryPubList();
                    ~SaDivulgeDataQueryPubList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据条数
                     * @return Count 数据条数
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置数据条数
                     * @param Count 数据条数
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取自定义泄露事件列表
                     * @return List 自定义泄露事件列表
                     */
                    std::vector<SaDivulgeDataQueryPub> GetList() const;

                    /**
                     * 设置自定义泄露事件列表
                     * @param List 自定义泄露事件列表
                     */
                    void SetList(const std::vector<SaDivulgeDataQueryPub>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 数据条数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 自定义泄露事件列表
                     */
                    std::vector<SaDivulgeDataQueryPub> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_SADIVULGEDATAQUERYPUBLIST_H_
