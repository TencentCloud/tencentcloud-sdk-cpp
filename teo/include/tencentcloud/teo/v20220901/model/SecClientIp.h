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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECCLIENTIP_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECCLIENTIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 客户端ip信息
                */
                class SecClientIp : public AbstractModel
                {
                public:
                    SecClientIp();
                    ~SecClientIp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端ip。
                     * @return ClientIp 客户端ip。
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置客户端ip。
                     * @param _clientIp 客户端ip。
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取最大qps。
                     * @return RequestMaxQps 最大qps。
                     * 
                     */
                    int64_t GetRequestMaxQps() const;

                    /**
                     * 设置最大qps。
                     * @param _requestMaxQps 最大qps。
                     * 
                     */
                    void SetRequestMaxQps(const int64_t& _requestMaxQps);

                    /**
                     * 判断参数 RequestMaxQps 是否已赋值
                     * @return RequestMaxQps 是否已赋值
                     * 
                     */
                    bool RequestMaxQpsHasBeenSet() const;

                    /**
                     * 获取请求数。
                     * @return RequestNum 请求数。
                     * 
                     */
                    int64_t GetRequestNum() const;

                    /**
                     * 设置请求数。
                     * @param _requestNum 请求数。
                     * 
                     */
                    void SetRequestNum(const int64_t& _requestNum);

                    /**
                     * 判断参数 RequestNum 是否已赋值
                     * @return RequestNum 是否已赋值
                     * 
                     */
                    bool RequestNumHasBeenSet() const;

                private:

                    /**
                     * 客户端ip。
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 最大qps。
                     */
                    int64_t m_requestMaxQps;
                    bool m_requestMaxQpsHasBeenSet;

                    /**
                     * 请求数。
                     */
                    int64_t m_requestNum;
                    bool m_requestNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECCLIENTIP_H_
