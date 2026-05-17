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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSAKASSETINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSAKASSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosRiskInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos关联ak资产信息
                */
                class CosAkAssetInfo : public AbstractModel
                {
                public:
                    CosAkAssetInfo();
                    ~CosAkAssetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取appid
                     * @return AppId appid
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置appid
                     * @param _appId appid
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
                     * 获取ak id
                     * @return AkId ak id
                     * 
                     */
                    std::string GetAkId() const;

                    /**
                     * 设置ak id
                     * @param _akId ak id
                     * 
                     */
                    void SetAkId(const std::string& _akId);

                    /**
                     * 判断参数 AkId 是否已赋值
                     * @return AkId 是否已赋值
                     * 
                     */
                    bool AkIdHasBeenSet() const;

                    /**
                     * 获取ak名称
                     * @return AkName ak名称
                     * 
                     */
                    std::string GetAkName() const;

                    /**
                     * 设置ak名称
                     * @param _akName ak名称
                     * 
                     */
                    void SetAkName(const std::string& _akName);

                    /**
                     * 判断参数 AkName 是否已赋值
                     * @return AkName 是否已赋值
                     * 
                     */
                    bool AkNameHasBeenSet() const;

                    /**
                     * 获取ak备注
                     * @return AkRemark ak备注
                     * 
                     */
                    std::string GetAkRemark() const;

                    /**
                     * 设置ak备注
                     * @param _akRemark ak备注
                     * 
                     */
                    void SetAkRemark(const std::string& _akRemark);

                    /**
                     * 判断参数 AkRemark 是否已赋值
                     * @return AkRemark 是否已赋值
                     * 
                     */
                    bool AkRemarkHasBeenSet() const;

                    /**
                     * 获取ak所属uin
                     * @return AkOwnerUin ak所属uin
                     * 
                     */
                    std::string GetAkOwnerUin() const;

                    /**
                     * 设置ak所属uin
                     * @param _akOwnerUin ak所属uin
                     * 
                     */
                    void SetAkOwnerUin(const std::string& _akOwnerUin);

                    /**
                     * 判断参数 AkOwnerUin 是否已赋值
                     * @return AkOwnerUin 是否已赋值
                     * 
                     */
                    bool AkOwnerUinHasBeenSet() const;

                    /**
                     * 获取ak类型 1 主 2 子
                     * @return AkOwnerType ak类型 1 主 2 子
                     * 
                     */
                    int64_t GetAkOwnerType() const;

                    /**
                     * 设置ak类型 1 主 2 子
                     * @param _akOwnerType ak类型 1 主 2 子
                     * 
                     */
                    void SetAkOwnerType(const int64_t& _akOwnerType);

                    /**
                     * 判断参数 AkOwnerType 是否已赋值
                     * @return AkOwnerType 是否已赋值
                     * 
                     */
                    bool AkOwnerTypeHasBeenSet() const;

                    /**
                     * 获取ak所属账号名
                     * @return AkOwnerName ak所属账号名
                     * 
                     */
                    std::string GetAkOwnerName() const;

                    /**
                     * 设置ak所属账号名
                     * @param _akOwnerName ak所属账号名
                     * 
                     */
                    void SetAkOwnerName(const std::string& _akOwnerName);

                    /**
                     * 判断参数 AkOwnerName 是否已赋值
                     * @return AkOwnerName 是否已赋值
                     * 
                     */
                    bool AkOwnerNameHasBeenSet() const;

                    /**
                     * 获取ak主账号名
                     * @return AkMainOwnerName ak主账号名
                     * 
                     */
                    std::string GetAkMainOwnerName() const;

                    /**
                     * 设置ak主账号名
                     * @param _akMainOwnerName ak主账号名
                     * 
                     */
                    void SetAkMainOwnerName(const std::string& _akMainOwnerName);

                    /**
                     * 判断参数 AkMainOwnerName 是否已赋值
                     * @return AkMainOwnerName 是否已赋值
                     * 
                     */
                    bool AkMainOwnerNameHasBeenSet() const;

                    /**
                     * 获取ak关联桶集合
                     * @return AkRelBucketSet ak关联桶集合
                     * 
                     */
                    std::vector<std::string> GetAkRelBucketSet() const;

                    /**
                     * 设置ak关联桶集合
                     * @param _akRelBucketSet ak关联桶集合
                     * 
                     */
                    void SetAkRelBucketSet(const std::vector<std::string>& _akRelBucketSet);

                    /**
                     * 判断参数 AkRelBucketSet 是否已赋值
                     * @return AkRelBucketSet 是否已赋值
                     * 
                     */
                    bool AkRelBucketSetHasBeenSet() const;

                    /**
                     * 获取ak关联告警集合
                     * @return AkRelAlarmSet ak关联告警集合
                     * 
                     */
                    std::vector<CosRiskInfo> GetAkRelAlarmSet() const;

                    /**
                     * 设置ak关联告警集合
                     * @param _akRelAlarmSet ak关联告警集合
                     * 
                     */
                    void SetAkRelAlarmSet(const std::vector<CosRiskInfo>& _akRelAlarmSet);

                    /**
                     * 判断参数 AkRelAlarmSet 是否已赋值
                     * @return AkRelAlarmSet 是否已赋值
                     * 
                     */
                    bool AkRelAlarmSetHasBeenSet() const;

                    /**
                     * 获取Ak关联ip数
                     * @return AkRelIpCount Ak关联ip数
                     * 
                     */
                    uint64_t GetAkRelIpCount() const;

                    /**
                     * 设置Ak关联ip数
                     * @param _akRelIpCount Ak关联ip数
                     * 
                     */
                    void SetAkRelIpCount(const uint64_t& _akRelIpCount);

                    /**
                     * 判断参数 AkRelIpCount 是否已赋值
                     * @return AkRelIpCount 是否已赋值
                     * 
                     */
                    bool AkRelIpCountHasBeenSet() const;

                    /**
                     * 获取ak状态 0 禁用 1 启用
                     * @return AkStatus ak状态 0 禁用 1 启用
                     * 
                     */
                    int64_t GetAkStatus() const;

                    /**
                     * 设置ak状态 0 禁用 1 启用
                     * @param _akStatus ak状态 0 禁用 1 启用
                     * 
                     */
                    void SetAkStatus(const int64_t& _akStatus);

                    /**
                     * 判断参数 AkStatus 是否已赋值
                     * @return AkStatus 是否已赋值
                     * 
                     */
                    bool AkStatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTimestamp 创建时间
                     * 
                     */
                    uint64_t GetCreateTimestamp() const;

                    /**
                     * 设置创建时间
                     * @param _createTimestamp 创建时间
                     * 
                     */
                    void SetCreateTimestamp(const uint64_t& _createTimestamp);

                    /**
                     * 判断参数 CreateTimestamp 是否已赋值
                     * @return CreateTimestamp 是否已赋值
                     * 
                     */
                    bool CreateTimestampHasBeenSet() const;

                    /**
                     * 获取最后访问时间
                     * @return LastAccessTimestamp 最后访问时间
                     * 
                     */
                    uint64_t GetLastAccessTimestamp() const;

                    /**
                     * 设置最后访问时间
                     * @param _lastAccessTimestamp 最后访问时间
                     * 
                     */
                    void SetLastAccessTimestamp(const uint64_t& _lastAccessTimestamp);

                    /**
                     * 判断参数 LastAccessTimestamp 是否已赋值
                     * @return LastAccessTimestamp 是否已赋值
                     * 
                     */
                    bool LastAccessTimestampHasBeenSet() const;

                private:

                    /**
                     * appid
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * ak id
                     */
                    std::string m_akId;
                    bool m_akIdHasBeenSet;

                    /**
                     * ak名称
                     */
                    std::string m_akName;
                    bool m_akNameHasBeenSet;

                    /**
                     * ak备注
                     */
                    std::string m_akRemark;
                    bool m_akRemarkHasBeenSet;

                    /**
                     * ak所属uin
                     */
                    std::string m_akOwnerUin;
                    bool m_akOwnerUinHasBeenSet;

                    /**
                     * ak类型 1 主 2 子
                     */
                    int64_t m_akOwnerType;
                    bool m_akOwnerTypeHasBeenSet;

                    /**
                     * ak所属账号名
                     */
                    std::string m_akOwnerName;
                    bool m_akOwnerNameHasBeenSet;

                    /**
                     * ak主账号名
                     */
                    std::string m_akMainOwnerName;
                    bool m_akMainOwnerNameHasBeenSet;

                    /**
                     * ak关联桶集合
                     */
                    std::vector<std::string> m_akRelBucketSet;
                    bool m_akRelBucketSetHasBeenSet;

                    /**
                     * ak关联告警集合
                     */
                    std::vector<CosRiskInfo> m_akRelAlarmSet;
                    bool m_akRelAlarmSetHasBeenSet;

                    /**
                     * Ak关联ip数
                     */
                    uint64_t m_akRelIpCount;
                    bool m_akRelIpCountHasBeenSet;

                    /**
                     * ak状态 0 禁用 1 启用
                     */
                    int64_t m_akStatus;
                    bool m_akStatusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    uint64_t m_createTimestamp;
                    bool m_createTimestampHasBeenSet;

                    /**
                     * 最后访问时间
                     */
                    uint64_t m_lastAccessTimestamp;
                    bool m_lastAccessTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSAKASSETINFO_H_
