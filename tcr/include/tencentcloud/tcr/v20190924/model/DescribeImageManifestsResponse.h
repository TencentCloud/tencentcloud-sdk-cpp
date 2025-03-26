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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMAGEMANIFESTSRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMAGEMANIFESTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/KeyValueString.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeImageManifests返回参数结构体
                */
                class DescribeImageManifestsResponse : public AbstractModel
                {
                public:
                    DescribeImageManifestsResponse();
                    ~DescribeImageManifestsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像的Manifest信息
                     * @return Manifest 镜像的Manifest信息
                     * 
                     */
                    std::string GetManifest() const;

                    /**
                     * 判断参数 Manifest 是否已赋值
                     * @return Manifest 是否已赋值
                     * 
                     */
                    bool ManifestHasBeenSet() const;

                    /**
                     * 获取镜像的配置信息
                     * @return Config 镜像的配置信息
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取镜像的Labels信息
                     * @return Labels 镜像的Labels信息
                     * 
                     */
                    std::vector<KeyValueString> GetLabels() const;

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取镜像大小，单位：byte
                     * @return Size 镜像大小，单位：byte
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * 镜像的Manifest信息
                     */
                    std::string m_manifest;
                    bool m_manifestHasBeenSet;

                    /**
                     * 镜像的配置信息
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 镜像的Labels信息
                     */
                    std::vector<KeyValueString> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 镜像大小，单位：byte
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMAGEMANIFESTSRESPONSE_H_
