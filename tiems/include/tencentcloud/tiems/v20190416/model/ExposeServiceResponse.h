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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_EXPOSESERVICERESPONSE_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_EXPOSESERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/ExposeInfo.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * ExposeService返回参数结构体
                */
                class ExposeServiceResponse : public AbstractModel
                {
                public:
                    ExposeServiceResponse();
                    ~ExposeServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取暴露方式
                     * @return Expose 暴露方式
                     * 
                     */
                    ExposeInfo GetExpose() const;

                    /**
                     * 判断参数 Expose 是否已赋值
                     * @return Expose 是否已赋值
                     * 
                     */
                    bool ExposeHasBeenSet() const;

                private:

                    /**
                     * 暴露方式
                     */
                    ExposeInfo m_expose;
                    bool m_exposeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_EXPOSESERVICERESPONSE_H_
