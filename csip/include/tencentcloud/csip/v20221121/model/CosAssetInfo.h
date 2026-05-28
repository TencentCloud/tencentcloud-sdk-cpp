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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosRiskAlarmInfo.h>
#include <tencentcloud/csip/v20221121/model/CosBucketAccessWay.h>
#include <tencentcloud/csip/v20221121/model/CosAssetDataScanDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Cos资产信息
                */
                class CosAssetInfo : public AbstractModel
                {
                public:
                    CosAssetInfo();
                    ~CosAssetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>appid</p>
                     * @return AppId <p>appid</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>appid</p>
                     * @param _appId <p>appid</p>
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
                     * 获取<p>cos桶名</p>
                     * @return BucketName <p>cos桶名</p>
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置<p>cos桶名</p>
                     * @param _bucketName <p>cos桶名</p>
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取<p>cos region名</p>
                     * @return BucketRegion <p>cos region名</p>
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置<p>cos region名</p>
                     * @param _bucketRegion <p>cos region名</p>
                     * 
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     * 
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取<p>地域码值</p>
                     * @return BucketRegionCode <p>地域码值</p>
                     * 
                     */
                    std::string GetBucketRegionCode() const;

                    /**
                     * 设置<p>地域码值</p>
                     * @param _bucketRegionCode <p>地域码值</p>
                     * 
                     */
                    void SetBucketRegionCode(const std::string& _bucketRegionCode);

                    /**
                     * 判断参数 BucketRegionCode 是否已赋值
                     * @return BucketRegionCode 是否已赋值
                     * 
                     */
                    bool BucketRegionCodeHasBeenSet() const;

                    /**
                     * 获取<p>cos桶备注</p>
                     * @return BucketMarker <p>cos桶备注</p>
                     * 
                     */
                    std::string GetBucketMarker() const;

                    /**
                     * 设置<p>cos桶备注</p>
                     * @param _bucketMarker <p>cos桶备注</p>
                     * 
                     */
                    void SetBucketMarker(const std::string& _bucketMarker);

                    /**
                     * 判断参数 BucketMarker 是否已赋值
                     * @return BucketMarker 是否已赋值
                     * 
                     */
                    bool BucketMarkerHasBeenSet() const;

                    /**
                     * 获取<p>cos桶主账号所属者</p>
                     * @return BucketOwnerUin <p>cos桶主账号所属者</p>
                     * 
                     */
                    std::string GetBucketOwnerUin() const;

                    /**
                     * 设置<p>cos桶主账号所属者</p>
                     * @param _bucketOwnerUin <p>cos桶主账号所属者</p>
                     * 
                     */
                    void SetBucketOwnerUin(const std::string& _bucketOwnerUin);

                    /**
                     * 判断参数 BucketOwnerUin 是否已赋值
                     * @return BucketOwnerUin 是否已赋值
                     * 
                     */
                    bool BucketOwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>cos主账号所属者昵称</p>
                     * @return BucketOwnerNickName <p>cos主账号所属者昵称</p>
                     * 
                     */
                    std::string GetBucketOwnerNickName() const;

                    /**
                     * 设置<p>cos主账号所属者昵称</p>
                     * @param _bucketOwnerNickName <p>cos主账号所属者昵称</p>
                     * 
                     */
                    void SetBucketOwnerNickName(const std::string& _bucketOwnerNickName);

                    /**
                     * 判断参数 BucketOwnerNickName 是否已赋值
                     * @return BucketOwnerNickName 是否已赋值
                     * 
                     */
                    bool BucketOwnerNickNameHasBeenSet() const;

                    /**
                     * 获取<p>cos桶标签详情</p>
                     * @return BucketTagInfo <p>cos桶标签详情</p>
                     * 
                     */
                    std::string GetBucketTagInfo() const;

                    /**
                     * 设置<p>cos桶标签详情</p>
                     * @param _bucketTagInfo <p>cos桶标签详情</p>
                     * 
                     */
                    void SetBucketTagInfo(const std::string& _bucketTagInfo);

                    /**
                     * 判断参数 BucketTagInfo 是否已赋值
                     * @return BucketTagInfo 是否已赋值
                     * 
                     */
                    bool BucketTagInfoHasBeenSet() const;

                    /**
                     * 获取<p>安全建议<br>1 暂无异常<br>2 建议加固<br>3 立即处理</p>
                     * @return BucketSecuritySuggestion <p>安全建议<br>1 暂无异常<br>2 建议加固<br>3 立即处理</p>
                     * 
                     */
                    int64_t GetBucketSecuritySuggestion() const;

                    /**
                     * 设置<p>安全建议<br>1 暂无异常<br>2 建议加固<br>3 立即处理</p>
                     * @param _bucketSecuritySuggestion <p>安全建议<br>1 暂无异常<br>2 建议加固<br>3 立即处理</p>
                     * 
                     */
                    void SetBucketSecuritySuggestion(const int64_t& _bucketSecuritySuggestion);

                    /**
                     * 判断参数 BucketSecuritySuggestion 是否已赋值
                     * @return BucketSecuritySuggestion 是否已赋值
                     * 
                     */
                    bool BucketSecuritySuggestionHasBeenSet() const;

                    /**
                     * 获取<p>告警列表</p>
                     * @return BucketAlarmList <p>告警列表</p>
                     * 
                     */
                    std::vector<CosRiskAlarmInfo> GetBucketAlarmList() const;

                    /**
                     * 设置<p>告警列表</p>
                     * @param _bucketAlarmList <p>告警列表</p>
                     * 
                     */
                    void SetBucketAlarmList(const std::vector<CosRiskAlarmInfo>& _bucketAlarmList);

                    /**
                     * 判断参数 BucketAlarmList 是否已赋值
                     * @return BucketAlarmList 是否已赋值
                     * 
                     */
                    bool BucketAlarmListHasBeenSet() const;

                    /**
                     * 获取<p>风险列表</p>
                     * @return BucketRiskList <p>风险列表</p>
                     * 
                     */
                    std::vector<CosRiskAlarmInfo> GetBucketRiskList() const;

                    /**
                     * 设置<p>风险列表</p>
                     * @param _bucketRiskList <p>风险列表</p>
                     * 
                     */
                    void SetBucketRiskList(const std::vector<CosRiskAlarmInfo>& _bucketRiskList);

                    /**
                     * 判断参数 BucketRiskList 是否已赋值
                     * @return BucketRiskList 是否已赋值
                     * 
                     */
                    bool BucketRiskListHasBeenSet() const;

                    /**
                     * 获取<p>调用源ip数</p>
                     * @return BucketInvokeSourceIpCount <p>调用源ip数</p>
                     * 
                     */
                    int64_t GetBucketInvokeSourceIpCount() const;

                    /**
                     * 设置<p>调用源ip数</p>
                     * @param _bucketInvokeSourceIpCount <p>调用源ip数</p>
                     * 
                     */
                    void SetBucketInvokeSourceIpCount(const int64_t& _bucketInvokeSourceIpCount);

                    /**
                     * 判断参数 BucketInvokeSourceIpCount 是否已赋值
                     * @return BucketInvokeSourceIpCount 是否已赋值
                     * 
                     */
                    bool BucketInvokeSourceIpCountHasBeenSet() const;

                    /**
                     * 获取<p>访问策略</p>
                     * @return BucketAccessWay <p>访问策略</p>
                     * 
                     */
                    CosBucketAccessWay GetBucketAccessWay() const;

                    /**
                     * 设置<p>访问策略</p>
                     * @param _bucketAccessWay <p>访问策略</p>
                     * 
                     */
                    void SetBucketAccessWay(const CosBucketAccessWay& _bucketAccessWay);

                    /**
                     * 判断参数 BucketAccessWay 是否已赋值
                     * @return BucketAccessWay 是否已赋值
                     * 
                     */
                    bool BucketAccessWayHasBeenSet() const;

                    /**
                     * 获取<p>创建时间Unix时间单位毫秒</p>
                     * @return CreateTime <p>创建时间Unix时间单位毫秒</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间Unix时间单位毫秒</p>
                     * @param _createTime <p>创建时间Unix时间单位毫秒</p>
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>最后访问时间Unix时间单位毫秒</p>
                     * @return LastAccessTime <p>最后访问时间Unix时间单位毫秒</p>
                     * 
                     */
                    int64_t GetLastAccessTime() const;

                    /**
                     * 设置<p>最后访问时间Unix时间单位毫秒</p>
                     * @param _lastAccessTime <p>最后访问时间Unix时间单位毫秒</p>
                     * 
                     */
                    void SetLastAccessTime(const int64_t& _lastAccessTime);

                    /**
                     * 判断参数 LastAccessTime 是否已赋值
                     * @return LastAccessTime 是否已赋值
                     * 
                     */
                    bool LastAccessTimeHasBeenSet() const;

                    /**
                     * 获取<p>存储桶id</p>
                     * @return BucketId <p>存储桶id</p>
                     * 
                     */
                    uint64_t GetBucketId() const;

                    /**
                     * 设置<p>存储桶id</p>
                     * @param _bucketId <p>存储桶id</p>
                     * 
                     */
                    void SetBucketId(const uint64_t& _bucketId);

                    /**
                     * 判断参数 BucketId 是否已赋值
                     * @return BucketId 是否已赋值
                     * 
                     */
                    bool BucketIdHasBeenSet() const;

                    /**
                     * 获取<p>0 关闭<br>1 开启</p>
                     * @return MonitorStatus <p>0 关闭<br>1 开启</p>
                     * 
                     */
                    uint64_t GetMonitorStatus() const;

                    /**
                     * 设置<p>0 关闭<br>1 开启</p>
                     * @param _monitorStatus <p>0 关闭<br>1 开启</p>
                     * 
                     */
                    void SetMonitorStatus(const uint64_t& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取<p>数据识别扫描信息</p>
                     * @return DataScanInfo <p>数据识别扫描信息</p>
                     * 
                     */
                    CosAssetDataScanDetail GetDataScanInfo() const;

                    /**
                     * 设置<p>数据识别扫描信息</p>
                     * @param _dataScanInfo <p>数据识别扫描信息</p>
                     * 
                     */
                    void SetDataScanInfo(const CosAssetDataScanDetail& _dataScanInfo);

                    /**
                     * 判断参数 DataScanInfo 是否已赋值
                     * @return DataScanInfo 是否已赋值
                     * 
                     */
                    bool DataScanInfoHasBeenSet() const;

                    /**
                     * 获取<p>存储桶Az类型</p><p>枚举值：</p><ul><li>MAZ： 多az</li><li>SAZ： 单az</li></ul>
                     * @return BucketAzType <p>存储桶Az类型</p><p>枚举值：</p><ul><li>MAZ： 多az</li><li>SAZ： 单az</li></ul>
                     * 
                     */
                    std::string GetBucketAzType() const;

                    /**
                     * 设置<p>存储桶Az类型</p><p>枚举值：</p><ul><li>MAZ： 多az</li><li>SAZ： 单az</li></ul>
                     * @param _bucketAzType <p>存储桶Az类型</p><p>枚举值：</p><ul><li>MAZ： 多az</li><li>SAZ： 单az</li></ul>
                     * 
                     */
                    void SetBucketAzType(const std::string& _bucketAzType);

                    /**
                     * 判断参数 BucketAzType 是否已赋值
                     * @return BucketAzType 是否已赋值
                     * 
                     */
                    bool BucketAzTypeHasBeenSet() const;

                    /**
                     * 获取<p>存储桶存储大小</p><p>默认值：0</p>
                     * @return BucketStorageSize <p>存储桶存储大小</p><p>默认值：0</p>
                     * 
                     */
                    int64_t GetBucketStorageSize() const;

                    /**
                     * 设置<p>存储桶存储大小</p><p>默认值：0</p>
                     * @param _bucketStorageSize <p>存储桶存储大小</p><p>默认值：0</p>
                     * 
                     */
                    void SetBucketStorageSize(const int64_t& _bucketStorageSize);

                    /**
                     * 判断参数 BucketStorageSize 是否已赋值
                     * @return BucketStorageSize 是否已赋值
                     * 
                     */
                    bool BucketStorageSizeHasBeenSet() const;

                    /**
                     * 获取<p>存储桶对象个数</p><p>默认值：0</p>
                     * @return BucketObjectCount <p>存储桶对象个数</p><p>默认值：0</p>
                     * 
                     */
                    int64_t GetBucketObjectCount() const;

                    /**
                     * 设置<p>存储桶对象个数</p><p>默认值：0</p>
                     * @param _bucketObjectCount <p>存储桶对象个数</p><p>默认值：0</p>
                     * 
                     */
                    void SetBucketObjectCount(const int64_t& _bucketObjectCount);

                    /**
                     * 判断参数 BucketObjectCount 是否已赋值
                     * @return BucketObjectCount 是否已赋值
                     * 
                     */
                    bool BucketObjectCountHasBeenSet() const;

                    /**
                     * 获取<p>存储桶敏感识别采样率</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * @return IdentifySampleRate <p>存储桶敏感识别采样率</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * 
                     */
                    double GetIdentifySampleRate() const;

                    /**
                     * 设置<p>存储桶敏感识别采样率</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * @param _identifySampleRate <p>存储桶敏感识别采样率</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * 
                     */
                    void SetIdentifySampleRate(const double& _identifySampleRate);

                    /**
                     * 判断参数 IdentifySampleRate 是否已赋值
                     * @return IdentifySampleRate 是否已赋值
                     * 
                     */
                    bool IdentifySampleRateHasBeenSet() const;

                private:

                    /**
                     * <p>appid</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>cos桶名</p>
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * <p>cos region名</p>
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * <p>地域码值</p>
                     */
                    std::string m_bucketRegionCode;
                    bool m_bucketRegionCodeHasBeenSet;

                    /**
                     * <p>cos桶备注</p>
                     */
                    std::string m_bucketMarker;
                    bool m_bucketMarkerHasBeenSet;

                    /**
                     * <p>cos桶主账号所属者</p>
                     */
                    std::string m_bucketOwnerUin;
                    bool m_bucketOwnerUinHasBeenSet;

                    /**
                     * <p>cos主账号所属者昵称</p>
                     */
                    std::string m_bucketOwnerNickName;
                    bool m_bucketOwnerNickNameHasBeenSet;

                    /**
                     * <p>cos桶标签详情</p>
                     */
                    std::string m_bucketTagInfo;
                    bool m_bucketTagInfoHasBeenSet;

                    /**
                     * <p>安全建议<br>1 暂无异常<br>2 建议加固<br>3 立即处理</p>
                     */
                    int64_t m_bucketSecuritySuggestion;
                    bool m_bucketSecuritySuggestionHasBeenSet;

                    /**
                     * <p>告警列表</p>
                     */
                    std::vector<CosRiskAlarmInfo> m_bucketAlarmList;
                    bool m_bucketAlarmListHasBeenSet;

                    /**
                     * <p>风险列表</p>
                     */
                    std::vector<CosRiskAlarmInfo> m_bucketRiskList;
                    bool m_bucketRiskListHasBeenSet;

                    /**
                     * <p>调用源ip数</p>
                     */
                    int64_t m_bucketInvokeSourceIpCount;
                    bool m_bucketInvokeSourceIpCountHasBeenSet;

                    /**
                     * <p>访问策略</p>
                     */
                    CosBucketAccessWay m_bucketAccessWay;
                    bool m_bucketAccessWayHasBeenSet;

                    /**
                     * <p>创建时间Unix时间单位毫秒</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最后访问时间Unix时间单位毫秒</p>
                     */
                    int64_t m_lastAccessTime;
                    bool m_lastAccessTimeHasBeenSet;

                    /**
                     * <p>存储桶id</p>
                     */
                    uint64_t m_bucketId;
                    bool m_bucketIdHasBeenSet;

                    /**
                     * <p>0 关闭<br>1 开启</p>
                     */
                    uint64_t m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * <p>数据识别扫描信息</p>
                     */
                    CosAssetDataScanDetail m_dataScanInfo;
                    bool m_dataScanInfoHasBeenSet;

                    /**
                     * <p>存储桶Az类型</p><p>枚举值：</p><ul><li>MAZ： 多az</li><li>SAZ： 单az</li></ul>
                     */
                    std::string m_bucketAzType;
                    bool m_bucketAzTypeHasBeenSet;

                    /**
                     * <p>存储桶存储大小</p><p>默认值：0</p>
                     */
                    int64_t m_bucketStorageSize;
                    bool m_bucketStorageSizeHasBeenSet;

                    /**
                     * <p>存储桶对象个数</p><p>默认值：0</p>
                     */
                    int64_t m_bucketObjectCount;
                    bool m_bucketObjectCountHasBeenSet;

                    /**
                     * <p>存储桶敏感识别采样率</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     */
                    double m_identifySampleRate;
                    bool m_identifySampleRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETINFO_H_
