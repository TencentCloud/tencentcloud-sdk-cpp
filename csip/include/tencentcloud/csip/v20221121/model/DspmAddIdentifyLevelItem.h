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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMADDIDENTIFYLEVELITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMADDIDENTIFYLEVELITEM_H_

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
                * dspm数据识别级别信息
                */
                class DspmAddIdentifyLevelItem : public AbstractModel
                {
                public:
                    DspmAddIdentifyLevelItem();
                    ~DspmAddIdentifyLevelItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>级别名称</p>
                     * @return LevelName <p>级别名称</p>
                     * 
                     */
                    std::string GetLevelName() const;

                    /**
                     * 设置<p>级别名称</p>
                     * @param _levelName <p>级别名称</p>
                     * 
                     */
                    void SetLevelName(const std::string& _levelName);

                    /**
                     * 判断参数 LevelName 是否已赋值
                     * @return LevelName 是否已赋值
                     * 
                     */
                    bool LevelNameHasBeenSet() const;

                    /**
                     * 获取<p>级别敏感程度</p><p>单位：分数</p>
                     * @return LevelScore <p>级别敏感程度</p><p>单位：分数</p>
                     * 
                     */
                    uint64_t GetLevelScore() const;

                    /**
                     * 设置<p>级别敏感程度</p><p>单位：分数</p>
                     * @param _levelScore <p>级别敏感程度</p><p>单位：分数</p>
                     * 
                     */
                    void SetLevelScore(const uint64_t& _levelScore);

                    /**
                     * 判断参数 LevelScore 是否已赋值
                     * @return LevelScore 是否已赋值
                     * 
                     */
                    bool LevelScoreHasBeenSet() const;

                private:

                    /**
                     * <p>级别名称</p>
                     */
                    std::string m_levelName;
                    bool m_levelNameHasBeenSet;

                    /**
                     * <p>级别敏感程度</p><p>单位：分数</p>
                     */
                    uint64_t m_levelScore;
                    bool m_levelScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMADDIDENTIFYLEVELITEM_H_
