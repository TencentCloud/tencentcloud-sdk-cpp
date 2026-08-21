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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSESTATUSITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSESTATUSITEM_H_

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
                * 单个计费项的授权状态汇总
                */
                class LicenseStatusItem : public AbstractModel
                {
                public:
                    LicenseStatusItem();
                    ~LicenseStatusItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源ID</p>
                     * @return ResourceId <p>资源ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID</p>
                     * @param _resourceId <p>资源ID</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>授权类型（ENTERPRISE_HP=旗舰版/ADVANCED_HP=专业版/RASP）</p>
                     * @return LicenseType <p>授权类型（ENTERPRISE_HP=旗舰版/ADVANCED_HP=专业版/RASP）</p>
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置<p>授权类型（ENTERPRISE_HP=旗舰版/ADVANCED_HP=专业版/RASP）</p>
                     * @param _licenseType <p>授权类型（ENTERPRISE_HP=旗舰版/ADVANCED_HP=专业版/RASP）</p>
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取<p>授权名称（旗舰版/专业版/RASP）</p>
                     * @return Name <p>授权名称（旗舰版/专业版/RASP）</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>授权名称（旗舰版/专业版/RASP）</p>
                     * @param _name <p>授权名称（旗舰版/专业版/RASP）</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>授权类别 0-主机授权 1-RASP授权</p>
                     * @return Category <p>授权类别 0-主机授权 1-RASP授权</p>
                     * 
                     */
                    int64_t GetCategory() const;

                    /**
                     * 设置<p>授权类别 0-主机授权 1-RASP授权</p>
                     * @param _category <p>授权类别 0-主机授权 1-RASP授权</p>
                     * 
                     */
                    void SetCategory(const int64_t& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>总数</p>
                     * @return TotalNum <p>总数</p>
                     * 
                     */
                    int64_t GetTotalNum() const;

                    /**
                     * 设置<p>总数</p>
                     * @param _totalNum <p>总数</p>
                     * 
                     */
                    void SetTotalNum(const int64_t& _totalNum);

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取<p>已用</p>
                     * @return UsedNum <p>已用</p>
                     * 
                     */
                    int64_t GetUsedNum() const;

                    /**
                     * 设置<p>已用</p>
                     * @param _usedNum <p>已用</p>
                     * 
                     */
                    void SetUsedNum(const int64_t& _usedNum);

                    /**
                     * 判断参数 UsedNum 是否已赋值
                     * @return UsedNum 是否已赋值
                     * 
                     */
                    bool UsedNumHasBeenSet() const;

                    /**
                     * 获取<p>剩余</p>
                     * @return RemainNum <p>剩余</p>
                     * 
                     */
                    int64_t GetRemainNum() const;

                    /**
                     * 设置<p>剩余</p>
                     * @param _remainNum <p>剩余</p>
                     * 
                     */
                    void SetRemainNum(const int64_t& _remainNum);

                    /**
                     * 判断参数 RemainNum 是否已赋值
                     * @return RemainNum 是否已赋值
                     * 
                     */
                    bool RemainNumHasBeenSet() const;

                    /**
                     * 获取<p>最早开始时间（格式：2006-01-02 15:04:05）</p>
                     * @return BeginTime <p>最早开始时间（格式：2006-01-02 15:04:05）</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>最早开始时间（格式：2006-01-02 15:04:05）</p>
                     * @param _beginTime <p>最早开始时间（格式：2006-01-02 15:04:05）</p>
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>最晚到期时间（格式：2006-01-02 15:04:05）</p>
                     * @return EndTime <p>最晚到期时间（格式：2006-01-02 15:04:05）</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>最晚到期时间（格式：2006-01-02 15:04:05）</p>
                     * @param _endTime <p>最晚到期时间（格式：2006-01-02 15:04:05）</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>资源ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>授权类型（ENTERPRISE_HP=旗舰版/ADVANCED_HP=专业版/RASP）</p>
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * <p>授权名称（旗舰版/专业版/RASP）</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>授权类别 0-主机授权 1-RASP授权</p>
                     */
                    int64_t m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>总数</p>
                     */
                    int64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * <p>已用</p>
                     */
                    int64_t m_usedNum;
                    bool m_usedNumHasBeenSet;

                    /**
                     * <p>剩余</p>
                     */
                    int64_t m_remainNum;
                    bool m_remainNumHasBeenSet;

                    /**
                     * <p>最早开始时间（格式：2006-01-02 15:04:05）</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>最晚到期时间（格式：2006-01-02 15:04:05）</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSESTATUSITEM_H_
