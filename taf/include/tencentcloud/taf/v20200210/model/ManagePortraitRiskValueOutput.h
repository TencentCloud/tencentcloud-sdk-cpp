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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_MANAGEPORTRAITRISKVALUEOUTPUT_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_MANAGEPORTRAITRISKVALUEOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 业务出参
                */
                class ManagePortraitRiskValueOutput : public AbstractModel
                {
                public:
                    ManagePortraitRiskValueOutput();
                    ~ManagePortraitRiskValueOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对应的IP
                     * @return UserIp 对应的IP
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置对应的IP
                     * @param _userIp 对应的IP
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取返回风险等级, 0 - 4，0代表无风险，数值越大，风险越高
                     * @return Level 返回风险等级, 0 - 4，0代表无风险，数值越大，风险越高
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置返回风险等级, 0 - 4，0代表无风险，数值越大，风险越高
                     * @param _level 返回风险等级, 0 - 4，0代表无风险，数值越大，风险越高
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                private:

                    /**
                     * 对应的IP
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 返回风险等级, 0 - 4，0代表无风险，数值越大，风险越高
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_MANAGEPORTRAITRISKVALUEOUTPUT_H_
