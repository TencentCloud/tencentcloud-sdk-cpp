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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_LOGSETINFO_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_LOGSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 日志集信息
                */
                class LogSetInfo : public AbstractModel
                {
                public:
                    LogSetInfo();
                    ~LogSetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开发者ID
                     * @return AppId 开发者ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置开发者ID
                     * @param _appId 开发者ID
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
                     * 获取渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Channel 渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channel 渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取日志集ID
                     * @return LogsetId 日志集ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集ID
                     * @param _logsetId 日志集ID
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取日志集名字
                     * @return LogsetName 日志集名字
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置日志集名字
                     * @param _logsetName 日志集名字
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取是否默认日志集
                     * @return IsDefault 是否默认日志集
                     * 
                     */
                    uint64_t GetIsDefault() const;

                    /**
                     * 设置是否默认日志集
                     * @param _isDefault 是否默认日志集
                     * 
                     */
                    void SetIsDefault(const uint64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取日志保存时间，单位为天
                     * @return LogsetSavePeriod 日志保存时间，单位为天
                     * 
                     */
                    uint64_t GetLogsetSavePeriod() const;

                    /**
                     * 设置日志保存时间，单位为天
                     * @param _logsetSavePeriod 日志保存时间，单位为天
                     * 
                     */
                    void SetLogsetSavePeriod(const uint64_t& _logsetSavePeriod);

                    /**
                     * 判断参数 LogsetSavePeriod 是否已赋值
                     * @return LogsetSavePeriod 是否已赋值
                     * 
                     */
                    bool LogsetSavePeriodHasBeenSet() const;

                    /**
                     * 获取创建日期
                     * @return CreateTime 创建日期
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建日期
                     * @param _createTime 创建日期
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
                     * 获取区域
                     * @return Region 区域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域
                     * @param _region 区域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取cls侧是否已经被删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deleted cls侧是否已经被删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeleted() const;

                    /**
                     * 设置cls侧是否已经被删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deleted cls侧是否已经被删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeleted(const std::string& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                    /**
                     * 获取英文区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionEn 英文区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionEn() const;

                    /**
                     * 设置英文区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionEn 英文区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionEn(const std::string& _regionEn);

                    /**
                     * 判断参数 RegionEn 是否已赋值
                     * @return RegionEn 是否已赋值
                     * 
                     */
                    bool RegionEnHasBeenSet() const;

                private:

                    /**
                     * 开发者ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 渠道
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 日志集ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志集名字
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * 是否默认日志集
                     */
                    uint64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 日志保存时间，单位为天
                     */
                    uint64_t m_logsetSavePeriod;
                    bool m_logsetSavePeriodHasBeenSet;

                    /**
                     * 创建日期
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * cls侧是否已经被删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * 英文区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionEn;
                    bool m_regionEnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_LOGSETINFO_H_
