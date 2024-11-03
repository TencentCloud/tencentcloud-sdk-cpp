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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULFIXSTATUSHOSTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULFIXSTATUSHOSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 查看漏洞修复详情 每台主机每个漏洞修复状态
                */
                class VulFixStatusHostInfo : public AbstractModel
                {
                public:
                    VulFixStatusHostInfo();
                    ~VulFixStatusHostInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机名称
                     * @return HostName 主机名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称
                     * @param _hostName 主机名称
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取主机ip
                     * @return HostIp 主机ip
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置主机ip
                     * @param _hostIp 主机ip
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取主机的quuid
                     * @return Quuid 主机的quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机的quuid
                     * @param _quuid 主机的quuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取状态：0-初始状态；1-已下发任务（修复中）2-完成（成功）；3-修复失败（失败）4-快照创建失败 导致修复失败（未修复）；
                     * @return Status 状态：0-初始状态；1-已下发任务（修复中）2-完成（成功）；3-修复失败（失败）4-快照创建失败 导致修复失败（未修复）；
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态：0-初始状态；1-已下发任务（修复中）2-完成（成功）；3-修复失败（失败）4-快照创建失败 导致修复失败（未修复）；
                     * @param _status 状态：0-初始状态；1-已下发任务（修复中）2-完成（成功）；3-修复失败（失败）4-快照创建失败 导致修复失败（未修复）；
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取修复时间
                     * @return ModifyTime 修复时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修复时间
                     * @param _modifyTime 修复时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取修复失败原因
                     * @return FailReason 修复失败原因
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置修复失败原因
                     * @param _failReason 修复失败原因
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                private:

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 主机ip
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 主机的quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 状态：0-初始状态；1-已下发任务（修复中）2-完成（成功）；3-修复失败（失败）4-快照创建失败 导致修复失败（未修复）；
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 修复时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 修复失败原因
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULFIXSTATUSHOSTINFO_H_
