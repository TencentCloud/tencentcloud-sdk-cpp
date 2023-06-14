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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_ASSETQUERYFILTER_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_ASSETQUERYFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/QueryFilter.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 资产查询过滤参数
                */
                class AssetQueryFilter : public AbstractModel
                {
                public:
                    AssetQueryFilter();
                    ~AssetQueryFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询参数
                     * @return Filter 查询参数
                     * 
                     */
                    std::vector<QueryFilter> GetFilter() const;

                    /**
                     * 设置查询参数
                     * @param _filter 查询参数
                     * 
                     */
                    void SetFilter(const std::vector<QueryFilter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取查询连接符，1 and  ，2 or
                     * @return Logic 查询连接符，1 and  ，2 or
                     * 
                     */
                    uint64_t GetLogic() const;

                    /**
                     * 设置查询连接符，1 and  ，2 or
                     * @param _logic 查询连接符，1 and  ，2 or
                     * 
                     */
                    void SetLogic(const uint64_t& _logic);

                    /**
                     * 判断参数 Logic 是否已赋值
                     * @return Logic 是否已赋值
                     * 
                     */
                    bool LogicHasBeenSet() const;

                private:

                    /**
                     * 查询参数
                     */
                    std::vector<QueryFilter> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 查询连接符，1 and  ，2 or
                     */
                    uint64_t m_logic;
                    bool m_logicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_ASSETQUERYFILTER_H_
