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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASEGWAPIQPSPOLICY_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASEGWAPIQPSPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseClientQPSPolicy.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * http访问服务路由qps策略
                */
                class CloudBaseGWAPIQPSPolicy : public AbstractModel
                {
                public:
                    CloudBaseGWAPIQPSPolicy();
                    ~CloudBaseGWAPIQPSPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取qps限额总量
                     * @return QPSTotal qps限额总量
                     * 
                     */
                    int64_t GetQPSTotal() const;

                    /**
                     * 设置qps限额总量
                     * @param _qPSTotal qps限额总量
                     * 
                     */
                    void SetQPSTotal(const int64_t& _qPSTotal);

                    /**
                     * 判断参数 QPSTotal 是否已赋值
                     * @return QPSTotal 是否已赋值
                     * 
                     */
                    bool QPSTotalHasBeenSet() const;

                    /**
                     * 获取客户端限频，如果不限制，LimitBy=None
                     * @return QPSPerClient 客户端限频，如果不限制，LimitBy=None
                     * 
                     */
                    CloudBaseClientQPSPolicy GetQPSPerClient() const;

                    /**
                     * 设置客户端限频，如果不限制，LimitBy=None
                     * @param _qPSPerClient 客户端限频，如果不限制，LimitBy=None
                     * 
                     */
                    void SetQPSPerClient(const CloudBaseClientQPSPolicy& _qPSPerClient);

                    /**
                     * 判断参数 QPSPerClient 是否已赋值
                     * @return QPSPerClient 是否已赋值
                     * 
                     */
                    bool QPSPerClientHasBeenSet() const;

                private:

                    /**
                     * qps限额总量
                     */
                    int64_t m_qPSTotal;
                    bool m_qPSTotalHasBeenSet;

                    /**
                     * 客户端限频，如果不限制，LimitBy=None
                     */
                    CloudBaseClientQPSPolicy m_qPSPerClient;
                    bool m_qPSPerClientHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASEGWAPIQPSPOLICY_H_
