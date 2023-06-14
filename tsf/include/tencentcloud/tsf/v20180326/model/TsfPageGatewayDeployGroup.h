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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGEGATEWAYDEPLOYGROUP_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGEGATEWAYDEPLOYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/GatewayDeployGroup.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * GatewayDeployGroup 翻页对象
                */
                class TsfPageGatewayDeployGroup : public AbstractModel
                {
                public:
                    TsfPageGatewayDeployGroup();
                    ~TsfPageGatewayDeployGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录总数
                     * @return TotalCount 记录总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置记录总数
                     * @param _totalCount 记录总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取记录实体列表
                     * @return Content 记录实体列表
                     * 
                     */
                    std::vector<GatewayDeployGroup> GetContent() const;

                    /**
                     * 设置记录实体列表
                     * @param _content 记录实体列表
                     * 
                     */
                    void SetContent(const std::vector<GatewayDeployGroup>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 记录总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 记录实体列表
                     */
                    std::vector<GatewayDeployGroup> m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGEGATEWAYDEPLOYGROUP_H_
