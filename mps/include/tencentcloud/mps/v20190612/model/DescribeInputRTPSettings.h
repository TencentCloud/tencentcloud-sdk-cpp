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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEINPUTRTPSETTINGS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEINPUTRTPSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 查询输入的RTP配置信息。
                */
                class DescribeInputRTPSettings : public AbstractModel
                {
                public:
                    DescribeInputRTPSettings();
                    ~DescribeInputRTPSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否FEC。
                     * @return FEC 是否FEC。
                     * 
                     */
                    std::string GetFEC() const;

                    /**
                     * 设置是否FEC。
                     * @param _fEC 是否FEC。
                     * 
                     */
                    void SetFEC(const std::string& _fEC);

                    /**
                     * 判断参数 FEC 是否已赋值
                     * @return FEC 是否已赋值
                     * 
                     */
                    bool FECHasBeenSet() const;

                    /**
                     * 获取空闲超时时间。
                     * @return IdleTimeout 空闲超时时间。
                     * 
                     */
                    int64_t GetIdleTimeout() const;

                    /**
                     * 设置空闲超时时间。
                     * @param _idleTimeout 空闲超时时间。
                     * 
                     */
                    void SetIdleTimeout(const int64_t& _idleTimeout);

                    /**
                     * 判断参数 IdleTimeout 是否已赋值
                     * @return IdleTimeout 是否已赋值
                     * 
                     */
                    bool IdleTimeoutHasBeenSet() const;

                private:

                    /**
                     * 是否FEC。
                     */
                    std::string m_fEC;
                    bool m_fECHasBeenSet;

                    /**
                     * 空闲超时时间。
                     */
                    int64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEINPUTRTPSETTINGS_H_
