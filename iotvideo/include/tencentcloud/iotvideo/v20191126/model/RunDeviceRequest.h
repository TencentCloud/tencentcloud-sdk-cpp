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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_RUNDEVICEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_RUNDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * RunDevice请求参数结构体
                */
                class RunDeviceRequest : public AbstractModel
                {
                public:
                    RunDeviceRequest();
                    ~RunDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TID列表 ≤100
                     * @return Tids TID列表 ≤100
                     * 
                     */
                    std::vector<std::string> GetTids() const;

                    /**
                     * 设置TID列表 ≤100
                     * @param _tids TID列表 ≤100
                     * 
                     */
                    void SetTids(const std::vector<std::string>& _tids);

                    /**
                     * 判断参数 Tids 是否已赋值
                     * @return Tids 是否已赋值
                     * 
                     */
                    bool TidsHasBeenSet() const;

                private:

                    /**
                     * TID列表 ≤100
                     */
                    std::vector<std::string> m_tids;
                    bool m_tidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_RUNDEVICEREQUEST_H_
