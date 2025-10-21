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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISCOSTCMD_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISCOSTCMD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * redis命令cost详情
                */
                class RedisCostCmd : public AbstractModel
                {
                public:
                    RedisCostCmd();
                    ~RedisCostCmd() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命令
                     * @return Cmd 命令
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置命令
                     * @param _cmd 命令
                     * 
                     */
                    void SetCmd(const std::string& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取最大cost
                     * @return MaxCost 最大cost
                     * 
                     */
                    uint64_t GetMaxCost() const;

                    /**
                     * 设置最大cost
                     * @param _maxCost 最大cost
                     * 
                     */
                    void SetMaxCost(const uint64_t& _maxCost);

                    /**
                     * 判断参数 MaxCost 是否已赋值
                     * @return MaxCost 是否已赋值
                     * 
                     */
                    bool MaxCostHasBeenSet() const;

                private:

                    /**
                     * 命令
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * 最大cost
                     */
                    uint64_t m_maxCost;
                    bool m_maxCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISCOSTCMD_H_
