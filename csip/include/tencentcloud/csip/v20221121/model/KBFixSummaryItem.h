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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_KBFIXSUMMARYITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_KBFIXSUMMARYITEM_H_

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
                * KB补丁修复汇总信息
                */
                class KBFixSummaryItem : public AbstractModel
                {
                public:
                    KBFixSummaryItem();
                    ~KBFixSummaryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取KB补丁ID
                     * @return KBId KB补丁ID
                     * 
                     */
                    int64_t GetKBId() const;

                    /**
                     * 设置KB补丁ID
                     * @param _kBId KB补丁ID
                     * 
                     */
                    void SetKBId(const int64_t& _kBId);

                    /**
                     * 判断参数 KBId 是否已赋值
                     * @return KBId 是否已赋值
                     * 
                     */
                    bool KBIdHasBeenSet() const;

                    /**
                     * 获取KB补丁名称
                     * @return KBName KB补丁名称
                     * 
                     */
                    std::string GetKBName() const;

                    /**
                     * 设置KB补丁名称
                     * @param _kBName KB补丁名称
                     * 
                     */
                    void SetKBName(const std::string& _kBName);

                    /**
                     * 判断参数 KBName 是否已赋值
                     * @return KBName 是否已赋值
                     * 
                     */
                    bool KBNameHasBeenSet() const;

                    /**
                     * 获取KB编号（如 KB5001234）
                     * @return KBNo KB编号（如 KB5001234）
                     * 
                     */
                    std::string GetKBNo() const;

                    /**
                     * 设置KB编号（如 KB5001234）
                     * @param _kBNo KB编号（如 KB5001234）
                     * 
                     */
                    void SetKBNo(const std::string& _kBNo);

                    /**
                     * 判断参数 KBNo 是否已赋值
                     * @return KBNo 是否已赋值
                     * 
                     */
                    bool KBNoHasBeenSet() const;

                    /**
                     * 获取关联漏洞数
                     * @return RelatedVulCount 关联漏洞数
                     * 
                     */
                    int64_t GetRelatedVulCount() const;

                    /**
                     * 设置关联漏洞数
                     * @param _relatedVulCount 关联漏洞数
                     * 
                     */
                    void SetRelatedVulCount(const int64_t& _relatedVulCount);

                    /**
                     * 判断参数 RelatedVulCount 是否已赋值
                     * @return RelatedVulCount 是否已赋值
                     * 
                     */
                    bool RelatedVulCountHasBeenSet() const;

                    /**
                     * 获取受影响主机数
                     * @return AffectedCount 受影响主机数
                     * 
                     */
                    int64_t GetAffectedCount() const;

                    /**
                     * 设置受影响主机数
                     * @param _affectedCount 受影响主机数
                     * 
                     */
                    void SetAffectedCount(const int64_t& _affectedCount);

                    /**
                     * 判断参数 AffectedCount 是否已赋值
                     * @return AffectedCount 是否已赋值
                     * 
                     */
                    bool AffectedCountHasBeenSet() const;

                    /**
                     * 获取修复后是否需要重启系统
                     * @return NeedReboot 修复后是否需要重启系统
                     * 
                     */
                    bool GetNeedReboot() const;

                    /**
                     * 设置修复后是否需要重启系统
                     * @param _needReboot 修复后是否需要重启系统
                     * 
                     */
                    void SetNeedReboot(const bool& _needReboot);

                    /**
                     * 判断参数 NeedReboot 是否已赋值
                     * @return NeedReboot 是否已赋值
                     * 
                     */
                    bool NeedRebootHasBeenSet() const;

                    /**
                     * 获取前置依赖补丁（逗号分隔的KB编号列表）
                     * @return KBPreCondition 前置依赖补丁（逗号分隔的KB编号列表）
                     * 
                     */
                    std::string GetKBPreCondition() const;

                    /**
                     * 设置前置依赖补丁（逗号分隔的KB编号列表）
                     * @param _kBPreCondition 前置依赖补丁（逗号分隔的KB编号列表）
                     * 
                     */
                    void SetKBPreCondition(const std::string& _kBPreCondition);

                    /**
                     * 判断参数 KBPreCondition 是否已赋值
                     * @return KBPreCondition 是否已赋值
                     * 
                     */
                    bool KBPreConditionHasBeenSet() const;

                private:

                    /**
                     * KB补丁ID
                     */
                    int64_t m_kBId;
                    bool m_kBIdHasBeenSet;

                    /**
                     * KB补丁名称
                     */
                    std::string m_kBName;
                    bool m_kBNameHasBeenSet;

                    /**
                     * KB编号（如 KB5001234）
                     */
                    std::string m_kBNo;
                    bool m_kBNoHasBeenSet;

                    /**
                     * 关联漏洞数
                     */
                    int64_t m_relatedVulCount;
                    bool m_relatedVulCountHasBeenSet;

                    /**
                     * 受影响主机数
                     */
                    int64_t m_affectedCount;
                    bool m_affectedCountHasBeenSet;

                    /**
                     * 修复后是否需要重启系统
                     */
                    bool m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * 前置依赖补丁（逗号分隔的KB编号列表）
                     */
                    std::string m_kBPreCondition;
                    bool m_kBPreConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_KBFIXSUMMARYITEM_H_
