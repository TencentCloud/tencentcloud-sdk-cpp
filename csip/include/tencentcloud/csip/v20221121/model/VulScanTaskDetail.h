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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULSCANTASKDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULSCANTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 漏洞扫描任务详情
                */
                class VulScanTaskDetail : public AbstractModel
                {
                public:
                    VulScanTaskDetail();
                    ~VulScanTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务id</p>
                     * @return Id <p>任务id</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>任务id</p>
                     * @param _id <p>任务id</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>创建者AppId</p>
                     * @return AppId <p>创建者AppId</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>创建者AppId</p>
                     * @param _appId <p>创建者AppId</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>公网ip</p>
                     * @return PublicIp <p>公网ip</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>公网ip</p>
                     * @param _publicIp <p>公网ip</p>
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>内网ip</p>
                     * @return PrivateIp <p>内网ip</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>内网ip</p>
                     * @param _privateIp <p>内网ip</p>
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取<p>操作系统</p>
                     * @return OS <p>操作系统</p>
                     * 
                     */
                    std::string GetOS() const;

                    /**
                     * 设置<p>操作系统</p>
                     * @param _oS <p>操作系统</p>
                     * 
                     */
                    void SetOS(const std::string& _oS);

                    /**
                     * 判断参数 OS 是否已赋值
                     * @return OS 是否已赋值
                     * 
                     */
                    bool OSHasBeenSet() const;

                    /**
                     * 获取<p>扫描状态（SUCCESS: 扫描完成/成功, OFFLINE: 客户端离线, TIMEOUT: 扫描超时, FAILED: 扫描失败, UNSUPPORTED: 客户端版本过低/不支持扫描, TERMINATED: 已终止, TERMINATING: 终止中）</p><p>枚举值：</p><ul><li>SCANNING： 扫描中</li></ul>
                     * @return Status <p>扫描状态（SUCCESS: 扫描完成/成功, OFFLINE: 客户端离线, TIMEOUT: 扫描超时, FAILED: 扫描失败, UNSUPPORTED: 客户端版本过低/不支持扫描, TERMINATED: 已终止, TERMINATING: 终止中）</p><p>枚举值：</p><ul><li>SCANNING： 扫描中</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>扫描状态（SUCCESS: 扫描完成/成功, OFFLINE: 客户端离线, TIMEOUT: 扫描超时, FAILED: 扫描失败, UNSUPPORTED: 客户端版本过低/不支持扫描, TERMINATED: 已终止, TERMINATING: 终止中）</p><p>枚举值：</p><ul><li>SCANNING： 扫描中</li></ul>
                     * @param _status <p>扫描状态（SUCCESS: 扫描完成/成功, OFFLINE: 客户端离线, TIMEOUT: 扫描超时, FAILED: 扫描失败, UNSUPPORTED: 客户端版本过低/不支持扫描, TERMINATED: 已终止, TERMINATING: 终止中）</p><p>枚举值：</p><ul><li>SCANNING： 扫描中</li></ul>
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
                     * 获取<p>扫描开始时间</p>
                     * @return StartTime <p>扫描开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>扫描开始时间</p>
                     * @param _startTime <p>扫描开始时间</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>扫描结束时间</p>
                     * @return EndTime <p>扫描结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>扫描结束时间</p>
                     * @param _endTime <p>扫描结束时间</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>漏洞数量</p>
                     * @return Vuls <p>漏洞数量</p>
                     * 
                     */
                    uint64_t GetVuls() const;

                    /**
                     * 设置<p>漏洞数量</p>
                     * @param _vuls <p>漏洞数量</p>
                     * 
                     */
                    void SetVuls(const uint64_t& _vuls);

                    /**
                     * 判断参数 Vuls 是否已赋值
                     * @return Vuls 是否已赋值
                     * 
                     */
                    bool VulsHasBeenSet() const;

                    /**
                     * 获取<p>失败原因</p>
                     * @return Description <p>失败原因</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>失败原因</p>
                     * @param _description <p>失败原因</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>任务id</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>创建者AppId</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>公网ip</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>内网ip</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>操作系统</p>
                     */
                    std::string m_oS;
                    bool m_oSHasBeenSet;

                    /**
                     * <p>扫描状态（SUCCESS: 扫描完成/成功, OFFLINE: 客户端离线, TIMEOUT: 扫描超时, FAILED: 扫描失败, UNSUPPORTED: 客户端版本过低/不支持扫描, TERMINATED: 已终止, TERMINATING: 终止中）</p><p>枚举值：</p><ul><li>SCANNING： 扫描中</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>扫描开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>扫描结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>漏洞数量</p>
                     */
                    uint64_t m_vuls;
                    bool m_vulsHasBeenSet;

                    /**
                     * <p>失败原因</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULSCANTASKDETAIL_H_
