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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPTOOLVERSION_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPTOOLVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * mcp tool版本信息
                */
                class AIGWMCPToolVersion : public AbstractModel
                {
                public:
                    AIGWMCPToolVersion();
                    ~AIGWMCPToolVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>创建者</p>
                     * @return Creator <p>创建者</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>创建者</p>
                     * @param _creator <p>创建者</p>
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>是否生效</p>
                     * @return IsActive <p>是否生效</p>
                     * 
                     */
                    bool GetIsActive() const;

                    /**
                     * 设置<p>是否生效</p>
                     * @param _isActive <p>是否生效</p>
                     * 
                     */
                    void SetIsActive(const bool& _isActive);

                    /**
                     * 判断参数 IsActive 是否已赋值
                     * @return IsActive 是否已赋值
                     * 
                     */
                    bool IsActiveHasBeenSet() const;

                    /**
                     * 获取<p>总参数</p>
                     * @return TotalParam <p>总参数</p>
                     * 
                     */
                    uint64_t GetTotalParam() const;

                    /**
                     * 设置<p>总参数</p>
                     * @param _totalParam <p>总参数</p>
                     * 
                     */
                    void SetTotalParam(const uint64_t& _totalParam);

                    /**
                     * 判断参数 TotalParam 是否已赋值
                     * @return TotalParam 是否已赋值
                     * 
                     */
                    bool TotalParamHasBeenSet() const;

                    /**
                     * 获取<p>版本号</p>
                     * @return Version <p>版本号</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>版本号</p>
                     * @param _version <p>版本号</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>创建者</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>是否生效</p>
                     */
                    bool m_isActive;
                    bool m_isActiveHasBeenSet;

                    /**
                     * <p>总参数</p>
                     */
                    uint64_t m_totalParam;
                    bool m_totalParamHasBeenSet;

                    /**
                     * <p>版本号</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPTOOLVERSION_H_
