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

#ifndef TENCENTCLOUD_IG_V20210518_MODEL_STANDARDDRUGINSTRUCTIONINFO_H_
#define TENCENTCLOUD_IG_V20210518_MODEL_STANDARDDRUGINSTRUCTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ig/v20210518/model/DrugInstructionInfo.h>


namespace TencentCloud
{
    namespace Ig
    {
        namespace V20210518
        {
            namespace Model
            {
                /**
                * 药品说明书标准药品结果
                */
                class StandardDrugInstructionInfo : public AbstractModel
                {
                public:
                    StandardDrugInstructionInfo();
                    ~StandardDrugInstructionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标准药品名
                     * @return StandardDrugName 标准药品名
                     * 
                     */
                    std::string GetStandardDrugName() const;

                    /**
                     * 设置标准药品名
                     * @param _standardDrugName 标准药品名
                     * 
                     */
                    void SetStandardDrugName(const std::string& _standardDrugName);

                    /**
                     * 判断参数 StandardDrugName 是否已赋值
                     * @return StandardDrugName 是否已赋值
                     * 
                     */
                    bool StandardDrugNameHasBeenSet() const;

                    /**
                     * 获取药品列表
                     * @return DrugInfos 药品列表
                     * 
                     */
                    std::vector<DrugInstructionInfo> GetDrugInfos() const;

                    /**
                     * 设置药品列表
                     * @param _drugInfos 药品列表
                     * 
                     */
                    void SetDrugInfos(const std::vector<DrugInstructionInfo>& _drugInfos);

                    /**
                     * 判断参数 DrugInfos 是否已赋值
                     * @return DrugInfos 是否已赋值
                     * 
                     */
                    bool DrugInfosHasBeenSet() const;

                private:

                    /**
                     * 标准药品名
                     */
                    std::string m_standardDrugName;
                    bool m_standardDrugNameHasBeenSet;

                    /**
                     * 药品列表
                     */
                    std::vector<DrugInstructionInfo> m_drugInfos;
                    bool m_drugInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IG_V20210518_MODEL_STANDARDDRUGINSTRUCTIONINFO_H_
