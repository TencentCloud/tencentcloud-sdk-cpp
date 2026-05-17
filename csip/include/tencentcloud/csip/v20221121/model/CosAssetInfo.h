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
                     * 获取appid
                     * @return AppId appid
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置appid
                     * @param _appId appid
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
                     * 获取cos桶名
                     * @return BucketName cos桶名
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置cos桶名
                     * @param _bucketName cos桶名
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
                     * 获取cos region名
                     * @return BucketRegion cos region名
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置cos region名
                     * @param _bucketRegion cos region名
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
                     * 获取地域码值
                     * @return BucketRegionCode 地域码值
                     * 
                     */
                    std::string GetBucketRegionCode() const;

                    /**
                     * 设置地域码值
                     * @param _bucketRegionCode 地域码值
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
                     * 获取cos桶备注
                     * @return BucketMarker cos桶备注
                     * 
                     */
                    std::string GetBucketMarker() const;

                    /**
                     * 设置cos桶备注
                     * @param _bucketMarker cos桶备注
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
                     * 获取cos桶主账号所属者
                     * @return BucketOwnerUin cos桶主账号所属者
                     * 
                     */
                    std::string GetBucketOwnerUin() const;

                    /**
                     * 设置cos桶主账号所属者
                     * @param _bucketOwnerUin cos桶主账号所属者
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
                     * 获取cos主账号所属者昵称
                     * @return BucketOwnerNickName cos主账号所属者昵称
                     * 
                     */
                    std::string GetBucketOwnerNickName() const;

                    /**
                     * 设置cos主账号所属者昵称
                     * @param _bucketOwnerNickName cos主账号所属者昵称
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
                     * 获取cos桶标签详情
                     * @return BucketTagInfo cos桶标签详情
                     * 
                     */
                    std::string GetBucketTagInfo() const;

                    /**
                     * 设置cos桶标签详情
                     * @param _bucketTagInfo cos桶标签详情
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
                     * 获取安全建议
1 暂无异常
2 建议加固
3 立即处理
                     * @return BucketSecuritySuggestion 安全建议
1 暂无异常
2 建议加固
3 立即处理
                     * 
                     */
                    int64_t GetBucketSecuritySuggestion() const;

                    /**
                     * 设置安全建议
1 暂无异常
2 建议加固
3 立即处理
                     * @param _bucketSecuritySuggestion 安全建议
1 暂无异常
2 建议加固
3 立即处理
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
                     * 获取告警列表
                     * @return BucketAlarmList 告警列表
                     * 
                     */
                    std::vector<CosRiskAlarmInfo> GetBucketAlarmList() const;

                    /**
                     * 设置告警列表
                     * @param _bucketAlarmList 告警列表
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
                     * 获取风险列表
                     * @return BucketRiskList 风险列表
                     * 
                     */
                    std::vector<CosRiskAlarmInfo> GetBucketRiskList() const;

                    /**
                     * 设置风险列表
                     * @param _bucketRiskList 风险列表
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
                     * 获取调用源ip数
                     * @return BucketInvokeSourceIpCount 调用源ip数
                     * 
                     */
                    int64_t GetBucketInvokeSourceIpCount() const;

                    /**
                     * 设置调用源ip数
                     * @param _bucketInvokeSourceIpCount 调用源ip数
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
                     * 获取访问策略
                     * @return BucketAccessWay 访问策略
                     * 
                     */
                    CosBucketAccessWay GetBucketAccessWay() const;

                    /**
                     * 设置访问策略
                     * @param _bucketAccessWay 访问策略
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
                     * 获取创建时间Unix时间单位毫秒
                     * @return CreateTime 创建时间Unix时间单位毫秒
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间Unix时间单位毫秒
                     * @param _createTime 创建时间Unix时间单位毫秒
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
                     * 获取最后访问时间Unix时间单位毫秒
                     * @return LastAccessTime 最后访问时间Unix时间单位毫秒
                     * 
                     */
                    int64_t GetLastAccessTime() const;

                    /**
                     * 设置最后访问时间Unix时间单位毫秒
                     * @param _lastAccessTime 最后访问时间Unix时间单位毫秒
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
                     * 获取存储桶id
                     * @return BucketId 存储桶id
                     * 
                     */
                    uint64_t GetBucketId() const;

                    /**
                     * 设置存储桶id
                     * @param _bucketId 存储桶id
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
                     * 获取0 关闭
1 开启
                     * @return MonitorStatus 0 关闭
1 开启
                     * 
                     */
                    uint64_t GetMonitorStatus() const;

                    /**
                     * 设置0 关闭
1 开启
                     * @param _monitorStatus 0 关闭
1 开启
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
                     * 获取数据识别扫描信息
                     * @return DataScanInfo 数据识别扫描信息
                     * 
                     */
                    CosAssetDataScanDetail GetDataScanInfo() const;

                    /**
                     * 设置数据识别扫描信息
                     * @param _dataScanInfo 数据识别扫描信息
                     * 
                     */
                    void SetDataScanInfo(const CosAssetDataScanDetail& _dataScanInfo);

                    /**
                     * 判断参数 DataScanInfo 是否已赋值
                     * @return DataScanInfo 是否已赋值
                     * 
                     */
                    bool DataScanInfoHasBeenSet() const;

                private:

                    /**
                     * appid
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * cos桶名
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * cos region名
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * 地域码值
                     */
                    std::string m_bucketRegionCode;
                    bool m_bucketRegionCodeHasBeenSet;

                    /**
                     * cos桶备注
                     */
                    std::string m_bucketMarker;
                    bool m_bucketMarkerHasBeenSet;

                    /**
                     * cos桶主账号所属者
                     */
                    std::string m_bucketOwnerUin;
                    bool m_bucketOwnerUinHasBeenSet;

                    /**
                     * cos主账号所属者昵称
                     */
                    std::string m_bucketOwnerNickName;
                    bool m_bucketOwnerNickNameHasBeenSet;

                    /**
                     * cos桶标签详情
                     */
                    std::string m_bucketTagInfo;
                    bool m_bucketTagInfoHasBeenSet;

                    /**
                     * 安全建议
1 暂无异常
2 建议加固
3 立即处理
                     */
                    int64_t m_bucketSecuritySuggestion;
                    bool m_bucketSecuritySuggestionHasBeenSet;

                    /**
                     * 告警列表
                     */
                    std::vector<CosRiskAlarmInfo> m_bucketAlarmList;
                    bool m_bucketAlarmListHasBeenSet;

                    /**
                     * 风险列表
                     */
                    std::vector<CosRiskAlarmInfo> m_bucketRiskList;
                    bool m_bucketRiskListHasBeenSet;

                    /**
                     * 调用源ip数
                     */
                    int64_t m_bucketInvokeSourceIpCount;
                    bool m_bucketInvokeSourceIpCountHasBeenSet;

                    /**
                     * 访问策略
                     */
                    CosBucketAccessWay m_bucketAccessWay;
                    bool m_bucketAccessWayHasBeenSet;

                    /**
                     * 创建时间Unix时间单位毫秒
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后访问时间Unix时间单位毫秒
                     */
                    int64_t m_lastAccessTime;
                    bool m_lastAccessTimeHasBeenSet;

                    /**
                     * 存储桶id
                     */
                    uint64_t m_bucketId;
                    bool m_bucketIdHasBeenSet;

                    /**
                     * 0 关闭
1 开启
                     */
                    uint64_t m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * 数据识别扫描信息
                     */
                    CosAssetDataScanDetail m_dataScanInfo;
                    bool m_dataScanInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETINFO_H_
