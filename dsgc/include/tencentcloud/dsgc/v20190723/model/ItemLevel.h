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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_ITEMLEVEL_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_ITEMLEVEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 某个分级单个信息
                */
                class ItemLevel : public AbstractModel
                {
                public:
                    ItemLevel();
                    ~ItemLevel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分级标识名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * @return LevelRiskName 分级标识名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * 
                     */
                    std::string GetLevelRiskName() const;

                    /**
                     * 设置分级标识名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * @param _levelRiskName 分级标识名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * 
                     */
                    void SetLevelRiskName(const std::string& _levelRiskName);

                    /**
                     * 判断参数 LevelRiskName 是否已赋值
                     * @return LevelRiskName 是否已赋值
                     * 
                     */
                    bool LevelRiskNameHasBeenSet() const;

                    /**
                     * 获取分级标识对应的风险分数值，1-10，最小为1，最大为10
                     * @return LevelRiskScore 分级标识对应的风险分数值，1-10，最小为1，最大为10
                     * 
                     */
                    int64_t GetLevelRiskScore() const;

                    /**
                     * 设置分级标识对应的风险分数值，1-10，最小为1，最大为10
                     * @param _levelRiskScore 分级标识对应的风险分数值，1-10，最小为1，最大为10
                     * 
                     */
                    void SetLevelRiskScore(const int64_t& _levelRiskScore);

                    /**
                     * 判断参数 LevelRiskScore 是否已赋值
                     * @return LevelRiskScore 是否已赋值
                     * 
                     */
                    bool LevelRiskScoreHasBeenSet() const;

                private:

                    /**
                     * 分级标识名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     */
                    std::string m_levelRiskName;
                    bool m_levelRiskNameHasBeenSet;

                    /**
                     * 分级标识对应的风险分数值，1-10，最小为1，最大为10
                     */
                    int64_t m_levelRiskScore;
                    bool m_levelRiskScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_ITEMLEVEL_H_
