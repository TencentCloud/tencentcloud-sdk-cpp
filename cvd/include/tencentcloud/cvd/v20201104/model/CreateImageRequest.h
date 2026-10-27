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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_CREATEIMAGEREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_CREATEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * CreateImage请求参数结构体
                */
                class CreateImageRequest : public AbstractModel
                {
                public:
                    CreateImageRequest();
                    ~CreateImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>云桌面实例ID。</p>
                     * @return InstanceId <p>云桌面实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>云桌面实例ID。</p>
                     * @param _instanceId <p>云桌面实例ID。</p>
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
                     * 获取<p>镜像名称。只支持中文、字母、数字或连接符号&quot;-&quot;，且最多60个字符。<br>默认值：空。</p>
                     * @return ImageName <p>镜像名称。只支持中文、字母、数字或连接符号&quot;-&quot;，且最多60个字符。<br>默认值：空。</p>
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置<p>镜像名称。只支持中文、字母、数字或连接符号&quot;-&quot;，且最多60个字符。<br>默认值：空。</p>
                     * @param _imageName <p>镜像名称。只支持中文、字母、数字或连接符号&quot;-&quot;，且最多60个字符。<br>默认值：空。</p>
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取<p>镜像的描述信息。支持英文或中文字符，最多60个字符。<br>默认值：空。</p>
                     * @return Description <p>镜像的描述信息。支持英文或中文字符，最多60个字符。<br>默认值：空。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>镜像的描述信息。支持英文或中文字符，最多60个字符。<br>默认值：空。</p>
                     * @param _description <p>镜像的描述信息。支持英文或中文字符，最多60个字符。<br>默认值：空。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>基于实例创建整机镜像时，指定包含在镜像里的数据盘ID。</p>
                     * @return DataDiskIds <p>基于实例创建整机镜像时，指定包含在镜像里的数据盘ID。</p>
                     * 
                     */
                    std::vector<std::string> GetDataDiskIds() const;

                    /**
                     * 设置<p>基于实例创建整机镜像时，指定包含在镜像里的数据盘ID。</p>
                     * @param _dataDiskIds <p>基于实例创建整机镜像时，指定包含在镜像里的数据盘ID。</p>
                     * 
                     */
                    void SetDataDiskIds(const std::vector<std::string>& _dataDiskIds);

                    /**
                     * 判断参数 DataDiskIds 是否已赋值
                     * @return DataDiskIds 是否已赋值
                     * 
                     */
                    bool DataDiskIdsHasBeenSet() const;

                private:

                    /**
                     * <p>云桌面实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>镜像名称。只支持中文、字母、数字或连接符号&quot;-&quot;，且最多60个字符。<br>默认值：空。</p>
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * <p>镜像的描述信息。支持英文或中文字符，最多60个字符。<br>默认值：空。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>基于实例创建整机镜像时，指定包含在镜像里的数据盘ID。</p>
                     */
                    std::vector<std::string> m_dataDiskIds;
                    bool m_dataDiskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_CREATEIMAGEREQUEST_H_
