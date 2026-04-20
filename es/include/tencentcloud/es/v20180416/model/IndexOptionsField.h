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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_INDEXOPTIONSFIELD_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_INDEXOPTIONSFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 索引自治字段
                */
                class IndexOptionsField : public AbstractModel
                {
                public:
                    IndexOptionsField();
                    ~IndexOptionsField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireMaxAge <p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireMaxAge() const;

                    /**
                     * 设置<p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireMaxAge <p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireMaxAge(const std::string& _expireMaxAge);

                    /**
                     * 判断参数 ExpireMaxAge 是否已赋值
                     * @return ExpireMaxAge 是否已赋值
                     * 
                     */
                    bool ExpireMaxAgeHasBeenSet() const;

                    /**
                     * 获取<p>过期大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireMaxSize <p>过期大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireMaxSize() const;

                    /**
                     * 设置<p>过期大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireMaxSize <p>过期大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireMaxSize(const std::string& _expireMaxSize);

                    /**
                     * 判断参数 ExpireMaxSize 是否已赋值
                     * @return ExpireMaxSize 是否已赋值
                     * 
                     */
                    bool ExpireMaxSizeHasBeenSet() const;

                    /**
                     * 获取<p>滚动周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RolloverMaxAge <p>滚动周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRolloverMaxAge() const;

                    /**
                     * 设置<p>滚动周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rolloverMaxAge <p>滚动周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRolloverMaxAge(const std::string& _rolloverMaxAge);

                    /**
                     * 判断参数 RolloverMaxAge 是否已赋值
                     * @return RolloverMaxAge 是否已赋值
                     * 
                     */
                    bool RolloverMaxAgeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启动态滚动</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RolloverDynamic <p>是否开启动态滚动</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRolloverDynamic() const;

                    /**
                     * 设置<p>是否开启动态滚动</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rolloverDynamic <p>是否开启动态滚动</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRolloverDynamic(const std::string& _rolloverDynamic);

                    /**
                     * 判断参数 RolloverDynamic 是否已赋值
                     * @return RolloverDynamic 是否已赋值
                     * 
                     */
                    bool RolloverDynamicHasBeenSet() const;

                    /**
                     * 获取<p>是否开启动态分片</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShardNumDynamic <p>是否开启动态分片</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShardNumDynamic() const;

                    /**
                     * 设置<p>是否开启动态分片</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shardNumDynamic <p>是否开启动态分片</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShardNumDynamic(const std::string& _shardNumDynamic);

                    /**
                     * 判断参数 ShardNumDynamic 是否已赋值
                     * @return ShardNumDynamic 是否已赋值
                     * 
                     */
                    bool ShardNumDynamicHasBeenSet() const;

                    /**
                     * 获取<p>时间分区字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimestampField <p>时间分区字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimestampField() const;

                    /**
                     * 设置<p>时间分区字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestampField <p>时间分区字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestampField(const std::string& _timestampField);

                    /**
                     * 判断参数 TimestampField 是否已赋值
                     * @return TimestampField 是否已赋值
                     * 
                     */
                    bool TimestampFieldHasBeenSet() const;

                    /**
                     * 获取<p>写入模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WriteMode <p>写入模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWriteMode() const;

                    /**
                     * 设置<p>写入模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _writeMode <p>写入模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWriteMode(const std::string& _writeMode);

                    /**
                     * 判断参数 WriteMode 是否已赋值
                     * @return WriteMode 是否已赋值
                     * 
                     */
                    bool WriteModeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启完全卸载</p><p>枚举值：</p><ul><li>true： 开启完全卸载</li><li>false： 关闭完全卸载</li></ul>
                     * @return FullOffloadedEnable <p>是否开启完全卸载</p><p>枚举值：</p><ul><li>true： 开启完全卸载</li><li>false： 关闭完全卸载</li></ul>
                     * 
                     */
                    std::string GetFullOffloadedEnable() const;

                    /**
                     * 设置<p>是否开启完全卸载</p><p>枚举值：</p><ul><li>true： 开启完全卸载</li><li>false： 关闭完全卸载</li></ul>
                     * @param _fullOffloadedEnable <p>是否开启完全卸载</p><p>枚举值：</p><ul><li>true： 开启完全卸载</li><li>false： 关闭完全卸载</li></ul>
                     * 
                     */
                    void SetFullOffloadedEnable(const std::string& _fullOffloadedEnable);

                    /**
                     * 判断参数 FullOffloadedEnable 是否已赋值
                     * @return FullOffloadedEnable 是否已赋值
                     * 
                     */
                    bool FullOffloadedEnableHasBeenSet() const;

                    /**
                     * 获取<p>完全卸载生命周期</p>
                     * @return FullOffloadedMaxAge <p>完全卸载生命周期</p>
                     * 
                     */
                    std::string GetFullOffloadedMaxAge() const;

                    /**
                     * 设置<p>完全卸载生命周期</p>
                     * @param _fullOffloadedMaxAge <p>完全卸载生命周期</p>
                     * 
                     */
                    void SetFullOffloadedMaxAge(const std::string& _fullOffloadedMaxAge);

                    /**
                     * 判断参数 FullOffloadedMaxAge 是否已赋值
                     * @return FullOffloadedMaxAge 是否已赋值
                     * 
                     */
                    bool FullOffloadedMaxAgeHasBeenSet() const;

                    /**
                     * 获取<p>完全卸载后备索引取回后生命周期</p>
                     * @return FullOffloadedRetrieveMaxAge <p>完全卸载后备索引取回后生命周期</p>
                     * 
                     */
                    std::string GetFullOffloadedRetrieveMaxAge() const;

                    /**
                     * 设置<p>完全卸载后备索引取回后生命周期</p>
                     * @param _fullOffloadedRetrieveMaxAge <p>完全卸载后备索引取回后生命周期</p>
                     * 
                     */
                    void SetFullOffloadedRetrieveMaxAge(const std::string& _fullOffloadedRetrieveMaxAge);

                    /**
                     * 判断参数 FullOffloadedRetrieveMaxAge 是否已赋值
                     * @return FullOffloadedRetrieveMaxAge 是否已赋值
                     * 
                     */
                    bool FullOffloadedRetrieveMaxAgeHasBeenSet() const;

                private:

                    /**
                     * <p>过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireMaxAge;
                    bool m_expireMaxAgeHasBeenSet;

                    /**
                     * <p>过期大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireMaxSize;
                    bool m_expireMaxSizeHasBeenSet;

                    /**
                     * <p>滚动周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rolloverMaxAge;
                    bool m_rolloverMaxAgeHasBeenSet;

                    /**
                     * <p>是否开启动态滚动</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rolloverDynamic;
                    bool m_rolloverDynamicHasBeenSet;

                    /**
                     * <p>是否开启动态分片</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shardNumDynamic;
                    bool m_shardNumDynamicHasBeenSet;

                    /**
                     * <p>时间分区字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timestampField;
                    bool m_timestampFieldHasBeenSet;

                    /**
                     * <p>写入模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_writeMode;
                    bool m_writeModeHasBeenSet;

                    /**
                     * <p>是否开启完全卸载</p><p>枚举值：</p><ul><li>true： 开启完全卸载</li><li>false： 关闭完全卸载</li></ul>
                     */
                    std::string m_fullOffloadedEnable;
                    bool m_fullOffloadedEnableHasBeenSet;

                    /**
                     * <p>完全卸载生命周期</p>
                     */
                    std::string m_fullOffloadedMaxAge;
                    bool m_fullOffloadedMaxAgeHasBeenSet;

                    /**
                     * <p>完全卸载后备索引取回后生命周期</p>
                     */
                    std::string m_fullOffloadedRetrieveMaxAge;
                    bool m_fullOffloadedRetrieveMaxAgeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INDEXOPTIONSFIELD_H_
