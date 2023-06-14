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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHEDPLUGINSUMMARY_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHEDPLUGINSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/AttachedPluginInfo.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 已绑定的插件信息。
                */
                class AttachedPluginSummary : public AbstractModel
                {
                public:
                    AttachedPluginSummary();
                    ~AttachedPluginSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取已绑定的插件总数。
                     * @return TotalCount 已绑定的插件总数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置已绑定的插件总数。
                     * @param _totalCount 已绑定的插件总数。
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
                     * 获取已绑定的插件信息。
                     * @return PluginSummary 已绑定的插件信息。
                     * 
                     */
                    std::vector<AttachedPluginInfo> GetPluginSummary() const;

                    /**
                     * 设置已绑定的插件信息。
                     * @param _pluginSummary 已绑定的插件信息。
                     * 
                     */
                    void SetPluginSummary(const std::vector<AttachedPluginInfo>& _pluginSummary);

                    /**
                     * 判断参数 PluginSummary 是否已赋值
                     * @return PluginSummary 是否已赋值
                     * 
                     */
                    bool PluginSummaryHasBeenSet() const;

                private:

                    /**
                     * 已绑定的插件总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 已绑定的插件信息。
                     */
                    std::vector<AttachedPluginInfo> m_pluginSummary;
                    bool m_pluginSummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHEDPLUGINSUMMARY_H_
