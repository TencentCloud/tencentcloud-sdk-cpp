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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_CREATECLOUDATTACHSERVICERESPONSE_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_CREATECLOUDATTACHSERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/CloudAttachInfo.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * CreateCloudAttachService返回参数结构体
                */
                class CreateCloudAttachServiceResponse : public AbstractModel
                {
                public:
                    CreateCloudAttachServiceResponse();
                    ~CreateCloudAttachServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取敏捷上云服务详情
                     * @return CloudAttach 敏捷上云服务详情
                     * 
                     */
                    CloudAttachInfo GetCloudAttach() const;

                    /**
                     * 判断参数 CloudAttach 是否已赋值
                     * @return CloudAttach 是否已赋值
                     * 
                     */
                    bool CloudAttachHasBeenSet() const;

                private:

                    /**
                     * 敏捷上云服务详情
                     */
                    CloudAttachInfo m_cloudAttach;
                    bool m_cloudAttachHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_CREATECLOUDATTACHSERVICERESPONSE_H_
