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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/LoginSettings.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述实例的信息
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID，可通过调用接口[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)获取。
                     * @return InstanceId 实例ID，可通过调用接口[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，可通过调用接口[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)获取。
                     * @param _instanceId 实例ID，可通过调用接口[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)获取。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取镜像ID，可通过调用接口[DescribeImages](https://cloud.tencent.com/document/product/213/15715)获取。
                     * @return ImageId 镜像ID，可通过调用接口[DescribeImages](https://cloud.tencent.com/document/product/213/15715)获取。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像ID，可通过调用接口[DescribeImages](https://cloud.tencent.com/document/product/213/15715)获取。
                     * @param _imageId 镜像ID，可通过调用接口[DescribeImages](https://cloud.tencent.com/document/product/213/15715)获取。
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取实例登录设置。
                     * @return LoginSettings 实例登录设置。
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置实例登录设置。
                     * @param _loginSettings 实例登录设置。
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                private:

                    /**
                     * 实例ID，可通过调用接口[DescribeInstances](https://cloud.tencent.com/document/product/213/15728)获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 镜像ID，可通过调用接口[DescribeImages](https://cloud.tencent.com/document/product/213/15715)获取。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 实例登录设置。
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCE_H_
