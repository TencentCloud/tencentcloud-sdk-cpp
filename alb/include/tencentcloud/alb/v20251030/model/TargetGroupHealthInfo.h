/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPHEALTHINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPHEALTHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/TargetHealthStatusInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 目标组健康检查状态
                */
                class TargetGroupHealthInfo : public AbstractModel
                {
                public:
                    TargetGroupHealthInfo();
                    ~TargetGroupHealthInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启健康检查。
                     * @return HealthCheckEnabled 是否开启健康检查。
                     * 
                     */
                    bool GetHealthCheckEnabled() const;

                    /**
                     * 设置是否开启健康检查。
                     * @param _healthCheckEnabled 是否开启健康检查。
                     * 
                     */
                    void SetHealthCheckEnabled(const bool& _healthCheckEnabled);

                    /**
                     * 判断参数 HealthCheckEnabled 是否已赋值
                     * @return HealthCheckEnabled 是否已赋值
                     * 
                     */
                    bool HealthCheckEnabledHasBeenSet() const;

                    /**
                     * 获取目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     * @return TargetGroupId 目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     * @param _targetGroupId 目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取服务健康检查状态列表。
                     * @return TargetHealthStatusInfos 服务健康检查状态列表。
                     * 
                     */
                    std::vector<TargetHealthStatusInfo> GetTargetHealthStatusInfos() const;

                    /**
                     * 设置服务健康检查状态列表。
                     * @param _targetHealthStatusInfos 服务健康检查状态列表。
                     * 
                     */
                    void SetTargetHealthStatusInfos(const std::vector<TargetHealthStatusInfo>& _targetHealthStatusInfos);

                    /**
                     * 判断参数 TargetHealthStatusInfos 是否已赋值
                     * @return TargetHealthStatusInfos 是否已赋值
                     * 
                     */
                    bool TargetHealthStatusInfosHasBeenSet() const;

                    /**
                     * 获取转发动作类型。取值：
TargetGroup：转发至目标组。
Redirect：重定向。
FixedResponse：返回固定内容。
Rewrite：重写。
InsertHeader：写入HTTP Header。
RemoveHeader：删除HTTP Header。
转发动作必选包含TargetGroup,Redirect,FixedResponse其中一个，并且执行顺序放在最后。
                     * @return Type 转发动作类型。取值：
TargetGroup：转发至目标组。
Redirect：重定向。
FixedResponse：返回固定内容。
Rewrite：重写。
InsertHeader：写入HTTP Header。
RemoveHeader：删除HTTP Header。
转发动作必选包含TargetGroup,Redirect,FixedResponse其中一个，并且执行顺序放在最后。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置转发动作类型。取值：
TargetGroup：转发至目标组。
Redirect：重定向。
FixedResponse：返回固定内容。
Rewrite：重写。
InsertHeader：写入HTTP Header。
RemoveHeader：删除HTTP Header。
转发动作必选包含TargetGroup,Redirect,FixedResponse其中一个，并且执行顺序放在最后。
                     * @param _type 转发动作类型。取值：
TargetGroup：转发至目标组。
Redirect：重定向。
FixedResponse：返回固定内容。
Rewrite：重写。
InsertHeader：写入HTTP Header。
RemoveHeader：删除HTTP Header。
转发动作必选包含TargetGroup,Redirect,FixedResponse其中一个，并且执行顺序放在最后。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 是否开启健康检查。
                     */
                    bool m_healthCheckEnabled;
                    bool m_healthCheckEnabledHasBeenSet;

                    /**
                     * 目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * 服务健康检查状态列表。
                     */
                    std::vector<TargetHealthStatusInfo> m_targetHealthStatusInfos;
                    bool m_targetHealthStatusInfosHasBeenSet;

                    /**
                     * 转发动作类型。取值：
TargetGroup：转发至目标组。
Redirect：重定向。
FixedResponse：返回固定内容。
Rewrite：重写。
InsertHeader：写入HTTP Header。
RemoveHeader：删除HTTP Header。
转发动作必选包含TargetGroup,Redirect,FixedResponse其中一个，并且执行顺序放在最后。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPHEALTHINFO_H_
