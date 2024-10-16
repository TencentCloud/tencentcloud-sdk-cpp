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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_CREATECLOUDATTACHSERVICEREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_CREATECLOUDATTACHSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/CreateCasInput.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * CreateCloudAttachService请求参数结构体
                */
                class CreateCloudAttachServiceRequest : public AbstractModel
                {
                public:
                    CreateCloudAttachServiceRequest();
                    ~CreateCloudAttachServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取创建敏捷上云入参
                     * @return Data 创建敏捷上云入参
                     * 
                     */
                    CreateCasInput GetData() const;

                    /**
                     * 设置创建敏捷上云入参
                     * @param _data 创建敏捷上云入参
                     * 
                     */
                    void SetData(const CreateCasInput& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 创建敏捷上云入参
                     */
                    CreateCasInput m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_CREATECLOUDATTACHSERVICEREQUEST_H_
