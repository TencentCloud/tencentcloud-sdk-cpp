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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_CLB_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_CLB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 负载均衡
                */
                class Clb : public AbstractModel
                {
                public:
                    Clb();
                    ~Clb() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡IP	
                     * @return ClbIp 负载均衡IP	
                     * 
                     */
                    std::string GetClbIp() const;

                    /**
                     * 设置负载均衡IP	
                     * @param _clbIp 负载均衡IP	
                     * 
                     */
                    void SetClbIp(const std::string& _clbIp);

                    /**
                     * 判断参数 ClbIp 是否已赋值
                     * @return ClbIp 是否已赋值
                     * 
                     */
                    bool ClbIpHasBeenSet() const;

                private:

                    /**
                     * 负载均衡IP	
                     */
                    std::string m_clbIp;
                    bool m_clbIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_CLB_H_
