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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANTASKITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANTASKITEM_H_

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
                * Skill 扫描任务列表项
                */
                class SkillScanTaskItem : public AbstractModel
                {
                public:
                    SkillScanTaskItem();
                    ~SkillScanTaskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取上传时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @return InsertTime 上传时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置上传时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @param _insertTime 上传时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取Skill 名称
                     * @return SkillName Skill 名称
                     * 
                     */
                    std::string GetSkillName() const;

                    /**
                     * 设置Skill 名称
                     * @param _skillName Skill 名称
                     * 
                     */
                    void SetSkillName(const std::string& _skillName);

                    /**
                     * 判断参数 SkillName 是否已赋值
                     * @return SkillName 是否已赋值
                     * 
                     */
                    bool SkillNameHasBeenSet() const;

                    /**
                     * 获取消耗次数（总消耗次数）
                     * @return DeductCount 消耗次数（总消耗次数）
                     * 
                     */
                    int64_t GetDeductCount() const;

                    /**
                     * 设置消耗次数（总消耗次数）
                     * @param _deductCount 消耗次数（总消耗次数）
                     * 
                     */
                    void SetDeductCount(const int64_t& _deductCount);

                    /**
                     * 判断参数 DeductCount 是否已赋值
                     * @return DeductCount 是否已赋值
                     * 
                     */
                    bool DeductCountHasBeenSet() const;

                private:

                    /**
                     * 上传时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * Skill 名称
                     */
                    std::string m_skillName;
                    bool m_skillNameHasBeenSet;

                    /**
                     * 消耗次数（总消耗次数）
                     */
                    int64_t m_deductCount;
                    bool m_deductCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANTASKITEM_H_
