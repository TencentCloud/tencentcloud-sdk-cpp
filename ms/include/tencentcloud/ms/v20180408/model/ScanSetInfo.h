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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_SCANSETINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_SCANSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/AppDetailInfo.h>
#include <tencentcloud/ms/v20180408/model/VirusInfo.h>
#include <tencentcloud/ms/v20180408/model/VulInfo.h>
#include <tencentcloud/ms/v20180408/model/AdInfo.h>
#include <tencentcloud/ms/v20180408/model/ScanPermissionList.h>
#include <tencentcloud/ms/v20180408/model/ScanSensitiveList.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * app扫描结果集
                */
                class ScanSetInfo : public AbstractModel
                {
                public:
                    ScanSetInfo();
                    ~ScanSetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     * @return TaskStatus 任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     */
                    uint64_t GetTaskStatus() const;

                    /**
                     * 设置任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     * @param TaskStatus 任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     */
                    void SetTaskStatus(const uint64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取app信息
                     * @return AppDetailInfo app信息
                     */
                    AppDetailInfo GetAppDetailInfo() const;

                    /**
                     * 设置app信息
                     * @param AppDetailInfo app信息
                     */
                    void SetAppDetailInfo(const AppDetailInfo& _appDetailInfo);

                    /**
                     * 判断参数 AppDetailInfo 是否已赋值
                     * @return AppDetailInfo 是否已赋值
                     */
                    bool AppDetailInfoHasBeenSet() const;

                    /**
                     * 获取病毒信息
                     * @return VirusInfo 病毒信息
                     */
                    VirusInfo GetVirusInfo() const;

                    /**
                     * 设置病毒信息
                     * @param VirusInfo 病毒信息
                     */
                    void SetVirusInfo(const VirusInfo& _virusInfo);

                    /**
                     * 判断参数 VirusInfo 是否已赋值
                     * @return VirusInfo 是否已赋值
                     */
                    bool VirusInfoHasBeenSet() const;

                    /**
                     * 获取漏洞信息
                     * @return VulInfo 漏洞信息
                     */
                    VulInfo GetVulInfo() const;

                    /**
                     * 设置漏洞信息
                     * @param VulInfo 漏洞信息
                     */
                    void SetVulInfo(const VulInfo& _vulInfo);

                    /**
                     * 判断参数 VulInfo 是否已赋值
                     * @return VulInfo 是否已赋值
                     */
                    bool VulInfoHasBeenSet() const;

                    /**
                     * 获取广告插件信息
                     * @return AdInfo 广告插件信息
                     */
                    AdInfo GetAdInfo() const;

                    /**
                     * 设置广告插件信息
                     * @param AdInfo 广告插件信息
                     */
                    void SetAdInfo(const AdInfo& _adInfo);

                    /**
                     * 判断参数 AdInfo 是否已赋值
                     * @return AdInfo 是否已赋值
                     */
                    bool AdInfoHasBeenSet() const;

                    /**
                     * 获取提交扫描的时间
                     * @return TaskTime 提交扫描的时间
                     */
                    uint64_t GetTaskTime() const;

                    /**
                     * 设置提交扫描的时间
                     * @param TaskTime 提交扫描的时间
                     */
                    void SetTaskTime(const uint64_t& _taskTime);

                    /**
                     * 判断参数 TaskTime 是否已赋值
                     * @return TaskTime 是否已赋值
                     */
                    bool TaskTimeHasBeenSet() const;

                    /**
                     * 获取状态码，成功返回0，失败返回错误码
                     * @return StatusCode 状态码，成功返回0，失败返回错误码
                     */
                    uint64_t GetStatusCode() const;

                    /**
                     * 设置状态码，成功返回0，失败返回错误码
                     * @param StatusCode 状态码，成功返回0，失败返回错误码
                     */
                    void SetStatusCode(const uint64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取状态描述
                     * @return StatusDesc 状态描述
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置状态描述
                     * @param StatusDesc 状态描述
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取状态操作指引
                     * @return StatusRef 状态操作指引
                     */
                    std::string GetStatusRef() const;

                    /**
                     * 设置状态操作指引
                     * @param StatusRef 状态操作指引
                     */
                    void SetStatusRef(const std::string& _statusRef);

                    /**
                     * 判断参数 StatusRef 是否已赋值
                     * @return StatusRef 是否已赋值
                     */
                    bool StatusRefHasBeenSet() const;

                    /**
                     * 获取系统权限信息
                     * @return PermissionInfo 系统权限信息
                     */
                    ScanPermissionList GetPermissionInfo() const;

                    /**
                     * 设置系统权限信息
                     * @param PermissionInfo 系统权限信息
                     */
                    void SetPermissionInfo(const ScanPermissionList& _permissionInfo);

                    /**
                     * 判断参数 PermissionInfo 是否已赋值
                     * @return PermissionInfo 是否已赋值
                     */
                    bool PermissionInfoHasBeenSet() const;

                    /**
                     * 获取敏感词列表
                     * @return SensitiveInfo 敏感词列表
                     */
                    ScanSensitiveList GetSensitiveInfo() const;

                    /**
                     * 设置敏感词列表
                     * @param SensitiveInfo 敏感词列表
                     */
                    void SetSensitiveInfo(const ScanSensitiveList& _sensitiveInfo);

                    /**
                     * 判断参数 SensitiveInfo 是否已赋值
                     * @return SensitiveInfo 是否已赋值
                     */
                    bool SensitiveInfoHasBeenSet() const;

                private:

                    /**
                     * 任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     */
                    uint64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * app信息
                     */
                    AppDetailInfo m_appDetailInfo;
                    bool m_appDetailInfoHasBeenSet;

                    /**
                     * 病毒信息
                     */
                    VirusInfo m_virusInfo;
                    bool m_virusInfoHasBeenSet;

                    /**
                     * 漏洞信息
                     */
                    VulInfo m_vulInfo;
                    bool m_vulInfoHasBeenSet;

                    /**
                     * 广告插件信息
                     */
                    AdInfo m_adInfo;
                    bool m_adInfoHasBeenSet;

                    /**
                     * 提交扫描的时间
                     */
                    uint64_t m_taskTime;
                    bool m_taskTimeHasBeenSet;

                    /**
                     * 状态码，成功返回0，失败返回错误码
                     */
                    uint64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 状态描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 状态操作指引
                     */
                    std::string m_statusRef;
                    bool m_statusRefHasBeenSet;

                    /**
                     * 系统权限信息
                     */
                    ScanPermissionList m_permissionInfo;
                    bool m_permissionInfoHasBeenSet;

                    /**
                     * 敏感词列表
                     */
                    ScanSensitiveList m_sensitiveInfo;
                    bool m_sensitiveInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_SCANSETINFO_H_
