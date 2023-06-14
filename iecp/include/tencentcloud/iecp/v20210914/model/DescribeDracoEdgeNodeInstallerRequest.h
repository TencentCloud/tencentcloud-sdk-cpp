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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEDRACOEDGENODEINSTALLERREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEDRACOEDGENODEINSTALLERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeDracoEdgeNodeInstaller请求参数结构体
                */
                class DescribeDracoEdgeNodeInstallerRequest : public AbstractModel
                {
                public:
                    DescribeDracoEdgeNodeInstallerRequest();
                    ~DescribeDracoEdgeNodeInstallerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备SN
                     * @return SN 设备SN
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 设置设备SN
                     * @param _sN 设备SN
                     * 
                     */
                    void SetSN(const std::string& _sN);

                    /**
                     * 判断参数 SN 是否已赋值
                     * @return SN 是否已赋值
                     * 
                     */
                    bool SNHasBeenSet() const;

                private:

                    /**
                     * 设备SN
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEDRACOEDGENODEINSTALLERREQUEST_H_
