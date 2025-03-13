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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PACKAGE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/BindInstanceInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 资源包
                */
                class Package : public AbstractModel
                {
                public:
                    Package();
                    ~Package() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AppID
                     * @return AppId AppID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置AppID
                     * @param _appId AppID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取资源包唯一ID
                     * @return PackageId 资源包唯一ID
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置资源包唯一ID
                     * @param _packageId 资源包唯一ID
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取资源包名称
                     * @return PackageName 资源包名称
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置资源包名称
                     * @param _packageName 资源包名称
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取资源包类型
CCU-计算资源包，DISK-存储资源包
                     * @return PackageType 资源包类型
CCU-计算资源包，DISK-存储资源包
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置资源包类型
CCU-计算资源包，DISK-存储资源包
                     * @param _packageType 资源包类型
CCU-计算资源包，DISK-存储资源包
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取资源包使用地域
china-中国内地通用，overseas-港澳台及海外通用
                     * @return PackageRegion 资源包使用地域
china-中国内地通用，overseas-港澳台及海外通用
                     * 
                     */
                    std::string GetPackageRegion() const;

                    /**
                     * 设置资源包使用地域
china-中国内地通用，overseas-港澳台及海外通用
                     * @param _packageRegion 资源包使用地域
china-中国内地通用，overseas-港澳台及海外通用
                     * 
                     */
                    void SetPackageRegion(const std::string& _packageRegion);

                    /**
                     * 判断参数 PackageRegion 是否已赋值
                     * @return PackageRegion 是否已赋值
                     * 
                     */
                    bool PackageRegionHasBeenSet() const;

                    /**
                     * 获取资源包状态
creating-创建中；
using-使用中；
expired-已过期；
normal_finish-使用完；
apply_refund-申请退费中；
refund-已退费。
                     * @return Status 资源包状态
creating-创建中；
using-使用中；
expired-已过期；
normal_finish-使用完；
apply_refund-申请退费中；
refund-已退费。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置资源包状态
creating-创建中；
using-使用中；
expired-已过期；
normal_finish-使用完；
apply_refund-申请退费中；
refund-已退费。
                     * @param _status 资源包状态
creating-创建中；
using-使用中；
expired-已过期；
normal_finish-使用完；
apply_refund-申请退费中；
refund-已退费。
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
                     * 获取资源包总量
                     * @return PackageTotalSpec 资源包总量
                     * 
                     */
                    double GetPackageTotalSpec() const;

                    /**
                     * 设置资源包总量
                     * @param _packageTotalSpec 资源包总量
                     * 
                     */
                    void SetPackageTotalSpec(const double& _packageTotalSpec);

                    /**
                     * 判断参数 PackageTotalSpec 是否已赋值
                     * @return PackageTotalSpec 是否已赋值
                     * 
                     */
                    bool PackageTotalSpecHasBeenSet() const;

                    /**
                     * 获取资源包已使用量
                     * @return PackageUsedSpec 资源包已使用量
                     * 
                     */
                    double GetPackageUsedSpec() const;

                    /**
                     * 设置资源包已使用量
                     * @param _packageUsedSpec 资源包已使用量
                     * 
                     */
                    void SetPackageUsedSpec(const double& _packageUsedSpec);

                    /**
                     * 判断参数 PackageUsedSpec 是否已赋值
                     * @return PackageUsedSpec 是否已赋值
                     * 
                     */
                    bool PackageUsedSpecHasBeenSet() const;

                    /**
                     * 获取是否还有库存余量
                     * @return HasQuota 是否还有库存余量
                     * 
                     */
                    bool GetHasQuota() const;

                    /**
                     * 设置是否还有库存余量
                     * @param _hasQuota 是否还有库存余量
                     * 
                     */
                    void SetHasQuota(const bool& _hasQuota);

                    /**
                     * 判断参数 HasQuota 是否已赋值
                     * @return HasQuota 是否已赋值
                     * 
                     */
                    bool HasQuotaHasBeenSet() const;

                    /**
                     * 获取绑定实例信息
                     * @return BindInstanceInfos 绑定实例信息
                     * 
                     */
                    std::vector<BindInstanceInfo> GetBindInstanceInfos() const;

                    /**
                     * 设置绑定实例信息
                     * @param _bindInstanceInfos 绑定实例信息
                     * 
                     */
                    void SetBindInstanceInfos(const std::vector<BindInstanceInfo>& _bindInstanceInfos);

                    /**
                     * 判断参数 BindInstanceInfos 是否已赋值
                     * @return BindInstanceInfos 是否已赋值
                     * 
                     */
                    bool BindInstanceInfosHasBeenSet() const;

                    /**
                     * 获取生效时间：2022-07-01 00:00:00
                     * @return StartTime 生效时间：2022-07-01 00:00:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置生效时间：2022-07-01 00:00:00
                     * @param _startTime 生效时间：2022-07-01 00:00:00
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
                     * 获取失效时间：2022-08-01 00:00:00
                     * @return ExpireTime 失效时间：2022-08-01 00:00:00
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置失效时间：2022-08-01 00:00:00
                     * @param _expireTime 失效时间：2022-08-01 00:00:00
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取资源包历史绑定（已解绑）实例信息
                     * @return HistoryBindResourceInfos 资源包历史绑定（已解绑）实例信息
                     * 
                     */
                    std::vector<BindInstanceInfo> GetHistoryBindResourceInfos() const;

                    /**
                     * 设置资源包历史绑定（已解绑）实例信息
                     * @param _historyBindResourceInfos 资源包历史绑定（已解绑）实例信息
                     * 
                     */
                    void SetHistoryBindResourceInfos(const std::vector<BindInstanceInfo>& _historyBindResourceInfos);

                    /**
                     * 判断参数 HistoryBindResourceInfos 是否已赋值
                     * @return HistoryBindResourceInfos 是否已赋值
                     * 
                     */
                    bool HistoryBindResourceInfosHasBeenSet() const;

                private:

                    /**
                     * AppID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 资源包唯一ID
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 资源包名称
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 资源包类型
CCU-计算资源包，DISK-存储资源包
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 资源包使用地域
china-中国内地通用，overseas-港澳台及海外通用
                     */
                    std::string m_packageRegion;
                    bool m_packageRegionHasBeenSet;

                    /**
                     * 资源包状态
creating-创建中；
using-使用中；
expired-已过期；
normal_finish-使用完；
apply_refund-申请退费中；
refund-已退费。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 资源包总量
                     */
                    double m_packageTotalSpec;
                    bool m_packageTotalSpecHasBeenSet;

                    /**
                     * 资源包已使用量
                     */
                    double m_packageUsedSpec;
                    bool m_packageUsedSpecHasBeenSet;

                    /**
                     * 是否还有库存余量
                     */
                    bool m_hasQuota;
                    bool m_hasQuotaHasBeenSet;

                    /**
                     * 绑定实例信息
                     */
                    std::vector<BindInstanceInfo> m_bindInstanceInfos;
                    bool m_bindInstanceInfosHasBeenSet;

                    /**
                     * 生效时间：2022-07-01 00:00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 失效时间：2022-08-01 00:00:00
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 资源包历史绑定（已解绑）实例信息
                     */
                    std::vector<BindInstanceInfo> m_historyBindResourceInfos;
                    bool m_historyBindResourceInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PACKAGE_H_
