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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_CREATETDEMFUNNELREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_CREATETDEMFUNNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/FunnelStepInput.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateTDEMFunnel请求参数结构体
                */
                class CreateTDEMFunnelRequest : public AbstractModel
                {
                public:
                    CreateTDEMFunnelRequest();
                    ~CreateTDEMFunnelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用id</p>
                     * @return AppId <p>应用id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用id</p>
                     * @param _appId <p>应用id</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>漏斗名</p>
                     * @return FunnelName <p>漏斗名</p>
                     * 
                     */
                    std::string GetFunnelName() const;

                    /**
                     * 设置<p>漏斗名</p>
                     * @param _funnelName <p>漏斗名</p>
                     * 
                     */
                    void SetFunnelName(const std::string& _funnelName);

                    /**
                     * 判断参数 FunnelName 是否已赋值
                     * @return FunnelName 是否已赋值
                     * 
                     */
                    bool FunnelNameHasBeenSet() const;

                    /**
                     * 获取<p>漏斗步骤</p>
                     * @return Steps <p>漏斗步骤</p>
                     * 
                     */
                    std::vector<FunnelStepInput> GetSteps() const;

                    /**
                     * 设置<p>漏斗步骤</p>
                     * @param _steps <p>漏斗步骤</p>
                     * 
                     */
                    void SetSteps(const std::vector<FunnelStepInput>& _steps);

                    /**
                     * 判断参数 Steps 是否已赋值
                     * @return Steps 是否已赋值
                     * 
                     */
                    bool StepsHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>漏斗状态</p>
                     * @return Status <p>漏斗状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>漏斗状态</p>
                     * @param _status <p>漏斗状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>漏斗来源</p>
                     * @return Source <p>漏斗来源</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>漏斗来源</p>
                     * @param _source <p>漏斗来源</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * <p>应用id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>漏斗名</p>
                     */
                    std::string m_funnelName;
                    bool m_funnelNameHasBeenSet;

                    /**
                     * <p>漏斗步骤</p>
                     */
                    std::vector<FunnelStepInput> m_steps;
                    bool m_stepsHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>漏斗状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>漏斗来源</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATETDEMFUNNELREQUEST_H_
