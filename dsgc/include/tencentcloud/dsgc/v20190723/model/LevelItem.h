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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_LEVELITEM_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_LEVELITEM_H_

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
                * 分级单项信息
                */
                class LevelItem : public AbstractModel
                {
                public:
                    LevelItem();
                    ~LevelItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分级ID
                     * @return LevelId 分级ID
                     * 
                     */
                    uint64_t GetLevelId() const;

                    /**
                     * 设置分级ID
                     * @param _levelId 分级ID
                     * 
                     */
                    void SetLevelId(const uint64_t& _levelId);

                    /**
                     * 判断参数 LevelId 是否已赋值
                     * @return LevelId 是否已赋值
                     * 
                     */
                    bool LevelIdHasBeenSet() const;

                    /**
                     * 获取分级组ID
                     * @return LevelGroupId 分级组ID
                     * 
                     */
                    uint64_t GetLevelGroupId() const;

                    /**
                     * 设置分级组ID
                     * @param _levelGroupId 分级组ID
                     * 
                     */
                    void SetLevelGroupId(const uint64_t& _levelGroupId);

                    /**
                     * 判断参数 LevelGroupId 是否已赋值
                     * @return LevelGroupId 是否已赋值
                     * 
                     */
                    bool LevelGroupIdHasBeenSet() const;

                    /**
                     * 获取分级标识名称，支持内置分级，内置分级取值：高，中，低，也可以自定义
                     * @return LevelRiskName 分级标识名称，支持内置分级，内置分级取值：高，中，低，也可以自定义
                     * 
                     */
                    std::string GetLevelRiskName() const;

                    /**
                     * 设置分级标识名称，支持内置分级，内置分级取值：高，中，低，也可以自定义
                     * @param _levelRiskName 分级标识名称，支持内置分级，内置分级取值：高，中，低，也可以自定义
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
                     * 获取分级风险分数，1-10，最小值为1，最大值为10
                     * @return LevelRiskScore 分级风险分数，1-10，最小值为1，最大值为10
                     * 
                     */
                    uint64_t GetLevelRiskScore() const;

                    /**
                     * 设置分级风险分数，1-10，最小值为1，最大值为10
                     * @param _levelRiskScore 分级风险分数，1-10，最小值为1，最大值为10
                     * 
                     */
                    void SetLevelRiskScore(const uint64_t& _levelRiskScore);

                    /**
                     * 判断参数 LevelRiskScore 是否已赋值
                     * @return LevelRiskScore 是否已赋值
                     * 
                     */
                    bool LevelRiskScoreHasBeenSet() const;

                private:

                    /**
                     * 分级ID
                     */
                    uint64_t m_levelId;
                    bool m_levelIdHasBeenSet;

                    /**
                     * 分级组ID
                     */
                    uint64_t m_levelGroupId;
                    bool m_levelGroupIdHasBeenSet;

                    /**
                     * 分级标识名称，支持内置分级，内置分级取值：高，中，低，也可以自定义
                     */
                    std::string m_levelRiskName;
                    bool m_levelRiskNameHasBeenSet;

                    /**
                     * 分级风险分数，1-10，最小值为1，最大值为10
                     */
                    uint64_t m_levelRiskScore;
                    bool m_levelRiskScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_LEVELITEM_H_
