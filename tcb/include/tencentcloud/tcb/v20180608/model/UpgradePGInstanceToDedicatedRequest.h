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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_UPGRADEPGINSTANCETODEDICATEDREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_UPGRADEPGINSTANCETODEDICATEDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * UpgradePGInstanceToDedicated请求参数结构体
                */
                class UpgradePGInstanceToDedicatedRequest : public AbstractModel
                {
                public:
                    UpgradePGInstanceToDedicatedRequest();
                    ~UpgradePGInstanceToDedicatedRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>云开发环境ID</p>
                     * @return EnvId <p>云开发环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>云开发环境ID</p>
                     * @param _envId <p>云开发环境ID</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>切换时机</p><p>枚举值：</p><ul><li>0： 立即切换</li><li>1： 指定时间切换</li></ul>
                     * @return SwitchTag <p>切换时机</p><p>枚举值：</p><ul><li>0： 立即切换</li><li>1： 指定时间切换</li></ul>
                     * 
                     */
                    int64_t GetSwitchTag() const;

                    /**
                     * 设置<p>切换时机</p><p>枚举值：</p><ul><li>0： 立即切换</li><li>1： 指定时间切换</li></ul>
                     * @param _switchTag <p>切换时机</p><p>枚举值：</p><ul><li>0： 立即切换</li><li>1： 指定时间切换</li></ul>
                     * 
                     */
                    void SetSwitchTag(const int64_t& _switchTag);

                    /**
                     * 判断参数 SwitchTag 是否已赋值
                     * @return SwitchTag 是否已赋值
                     * 
                     */
                    bool SwitchTagHasBeenSet() const;

                    /**
                     * 获取<p>切换开始时间</p><p>参数格式：15:04:05</p>
                     * @return SwitchStartTime <p>切换开始时间</p><p>参数格式：15:04:05</p>
                     * 
                     */
                    std::string GetSwitchStartTime() const;

                    /**
                     * 设置<p>切换开始时间</p><p>参数格式：15:04:05</p>
                     * @param _switchStartTime <p>切换开始时间</p><p>参数格式：15:04:05</p>
                     * 
                     */
                    void SetSwitchStartTime(const std::string& _switchStartTime);

                    /**
                     * 判断参数 SwitchStartTime 是否已赋值
                     * @return SwitchStartTime 是否已赋值
                     * 
                     */
                    bool SwitchStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>切换结束时间</p><p>参数格式：15:04:05</p>
                     * @return SwitchEndTime <p>切换结束时间</p><p>参数格式：15:04:05</p>
                     * 
                     */
                    std::string GetSwitchEndTime() const;

                    /**
                     * 设置<p>切换结束时间</p><p>参数格式：15:04:05</p>
                     * @param _switchEndTime <p>切换结束时间</p><p>参数格式：15:04:05</p>
                     * 
                     */
                    void SetSwitchEndTime(const std::string& _switchEndTime);

                    /**
                     * 判断参数 SwitchEndTime 是否已赋值
                     * @return SwitchEndTime 是否已赋值
                     * 
                     */
                    bool SwitchEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>PG 规格</p>
                     * @return SpecCode <p>PG 规格</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>PG 规格</p>
                     * @param _specCode <p>PG 规格</p>
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取<p>存储空间大小</p>
                     * @return Storage <p>存储空间大小</p>
                     * 
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置<p>存储空间大小</p>
                     * @param _storage <p>存储空间大小</p>
                     * 
                     */
                    void SetStorage(const uint64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                private:

                    /**
                     * <p>云开发环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>切换时机</p><p>枚举值：</p><ul><li>0： 立即切换</li><li>1： 指定时间切换</li></ul>
                     */
                    int64_t m_switchTag;
                    bool m_switchTagHasBeenSet;

                    /**
                     * <p>切换开始时间</p><p>参数格式：15:04:05</p>
                     */
                    std::string m_switchStartTime;
                    bool m_switchStartTimeHasBeenSet;

                    /**
                     * <p>切换结束时间</p><p>参数格式：15:04:05</p>
                     */
                    std::string m_switchEndTime;
                    bool m_switchEndTimeHasBeenSet;

                    /**
                     * <p>PG 规格</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>存储空间大小</p>
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_UPGRADEPGINSTANCETODEDICATEDREQUEST_H_
