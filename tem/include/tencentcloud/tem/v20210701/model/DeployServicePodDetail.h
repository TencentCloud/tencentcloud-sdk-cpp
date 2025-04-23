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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DEPLOYSERVICEPODDETAIL_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DEPLOYSERVICEPODDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 分批发布单批次详情
                */
                class DeployServicePodDetail : public AbstractModel
                {
                public:
                    DeployServicePodDetail();
                    ~DeployServicePodDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取pod Id
                     * @return PodId pod Id
                     * 
                     */
                    std::string GetPodId() const;

                    /**
                     * 设置pod Id
                     * @param _podId pod Id
                     * 
                     */
                    void SetPodId(const std::string& _podId);

                    /**
                     * 判断参数 PodId 是否已赋值
                     * @return PodId 是否已赋值
                     * 
                     */
                    bool PodIdHasBeenSet() const;

                    /**
                     * 获取pod状态
                     * @return PodStatus pod状态
                     * 
                     */
                    std::vector<std::string> GetPodStatus() const;

                    /**
                     * 设置pod状态
                     * @param _podStatus pod状态
                     * 
                     */
                    void SetPodStatus(const std::vector<std::string>& _podStatus);

                    /**
                     * 判断参数 PodStatus 是否已赋值
                     * @return PodStatus 是否已赋值
                     * 
                     */
                    bool PodStatusHasBeenSet() const;

                    /**
                     * 获取pod版本
                     * @return PodVersion pod版本
                     * 
                     */
                    std::string GetPodVersion() const;

                    /**
                     * 设置pod版本
                     * @param _podVersion pod版本
                     * 
                     */
                    void SetPodVersion(const std::string& _podVersion);

                    /**
                     * 判断参数 PodVersion 是否已赋值
                     * @return PodVersion 是否已赋值
                     * 
                     */
                    bool PodVersionHasBeenSet() const;

                    /**
                     * 获取pod创建时间
                     * @return CreateTime pod创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置pod创建时间
                     * @param _createTime pod创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取pod所在可用区
                     * @return Zone pod所在可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置pod所在可用区
                     * @param _zone pod所在可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取webshell地址
                     * @return Webshell webshell地址
                     * 
                     */
                    std::string GetWebshell() const;

                    /**
                     * 设置webshell地址
                     * @param _webshell webshell地址
                     * 
                     */
                    void SetWebshell(const std::string& _webshell);

                    /**
                     * 判断参数 Webshell 是否已赋值
                     * @return Webshell 是否已赋值
                     * 
                     */
                    bool WebshellHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * pod Id
                     */
                    std::string m_podId;
                    bool m_podIdHasBeenSet;

                    /**
                     * pod状态
                     */
                    std::vector<std::string> m_podStatus;
                    bool m_podStatusHasBeenSet;

                    /**
                     * pod版本
                     */
                    std::string m_podVersion;
                    bool m_podVersionHasBeenSet;

                    /**
                     * pod创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * pod所在可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * webshell地址
                     */
                    std::string m_webshell;
                    bool m_webshellHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DEPLOYSERVICEPODDETAIL_H_
