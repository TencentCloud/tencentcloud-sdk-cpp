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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDITEM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 批量修改记录入参，指定修改的记录ID和记录内容
                */
                class ModifyRecordItem : public AbstractModel
                {
                public:
                    ModifyRecordItem();
                    ~ModifyRecordItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录 ID
                     * @return RecordId 记录 ID
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 设置记录 ID
                     * @param _recordId 记录 ID
                     * 
                     */
                    void SetRecordId(const uint64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取主机记录
                     * @return SubDomain 主机记录
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置主机记录
                     * @param _subDomain 主机记录
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取记录类型
                     * @return RecordType 记录类型
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置记录类型
                     * @param _recordType 记录类型
                     * 
                     */
                    void SetRecordType(const std::string& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取记录线路
                     * @return RecordLine 记录线路
                     * 
                     */
                    std::string GetRecordLine() const;

                    /**
                     * 设置记录线路
                     * @param _recordLine 记录线路
                     * 
                     */
                    void SetRecordLine(const std::string& _recordLine);

                    /**
                     * 判断参数 RecordLine 是否已赋值
                     * @return RecordLine 是否已赋值
                     * 
                     */
                    bool RecordLineHasBeenSet() const;

                    /**
                     * 获取记录值
                     * @return Value 记录值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置记录值
                     * @param _value 记录值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取解析记录状态 1：开启 0：暂停
                     * @return Enabled 解析记录状态 1：开启 0：暂停
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置解析记录状态 1：开启 0：暂停
                     * @param _enabled 解析记录状态 1：开启 0：暂停
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
                     * @param _remark 备注信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取权重
                     * @return Weight 权重
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置权重
                     * @param _weight 权重
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取MX优先级
                     * @return MX MX优先级
                     * 
                     */
                    uint64_t GetMX() const;

                    /**
                     * 设置MX优先级
                     * @param _mX MX优先级
                     * 
                     */
                    void SetMX(const uint64_t& _mX);

                    /**
                     * 判断参数 MX 是否已赋值
                     * @return MX 是否已赋值
                     * 
                     */
                    bool MXHasBeenSet() const;

                    /**
                     * 获取TTL缓存时间
                     * @return TTL TTL缓存时间
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置TTL缓存时间
                     * @param _tTL TTL缓存时间
                     * 
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                private:

                    /**
                     * 记录 ID
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 主机记录
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 记录类型
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * 记录线路
                     */
                    std::string m_recordLine;
                    bool m_recordLineHasBeenSet;

                    /**
                     * 记录值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 解析记录状态 1：开启 0：暂停
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 权重
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * MX优先级
                     */
                    uint64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * TTL缓存时间
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDITEM_H_
