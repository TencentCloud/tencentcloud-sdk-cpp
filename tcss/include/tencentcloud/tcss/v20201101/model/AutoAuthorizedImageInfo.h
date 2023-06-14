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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_AUTOAUTHORIZEDIMAGEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_AUTOAUTHORIZEDIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 镜像自动授权结果信息
                */
                class AutoAuthorizedImageInfo : public AbstractModel
                {
                public:
                    AutoAuthorizedImageInfo();
                    ~AutoAuthorizedImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像id
                     * @return ImageId 镜像id
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像id
                     * @param _imageId 镜像id
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
                     * 获取镜像名称
                     * @return ImageName 镜像名称
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
                     * @param _imageName 镜像名称
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
                     * 获取授权时间
                     * @return AuthorizedTime 授权时间
                     * 
                     */
                    std::string GetAuthorizedTime() const;

                    /**
                     * 设置授权时间
                     * @param _authorizedTime 授权时间
                     * 
                     */
                    void SetAuthorizedTime(const std::string& _authorizedTime);

                    /**
                     * 判断参数 AuthorizedTime 是否已赋值
                     * @return AuthorizedTime 是否已赋值
                     * 
                     */
                    bool AuthorizedTimeHasBeenSet() const;

                    /**
                     * 获取授权结果，SUCCESS:成功，REACH_LIMIT:达到授权上限，LICENSE_INSUFFICIENT:授权数不足'
                     * @return Status 授权结果，SUCCESS:成功，REACH_LIMIT:达到授权上限，LICENSE_INSUFFICIENT:授权数不足'
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置授权结果，SUCCESS:成功，REACH_LIMIT:达到授权上限，LICENSE_INSUFFICIENT:授权数不足'
                     * @param _status 授权结果，SUCCESS:成功，REACH_LIMIT:达到授权上限，LICENSE_INSUFFICIENT:授权数不足'
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否授权，1：是，0：否
                     * @return IsAuthorized 是否授权，1：是，0：否
                     * 
                     */
                    uint64_t GetIsAuthorized() const;

                    /**
                     * 设置是否授权，1：是，0：否
                     * @param _isAuthorized 是否授权，1：是，0：否
                     * 
                     */
                    void SetIsAuthorized(const uint64_t& _isAuthorized);

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     * 
                     */
                    bool IsAuthorizedHasBeenSet() const;

                private:

                    /**
                     * 镜像id
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 授权时间
                     */
                    std::string m_authorizedTime;
                    bool m_authorizedTimeHasBeenSet;

                    /**
                     * 授权结果，SUCCESS:成功，REACH_LIMIT:达到授权上限，LICENSE_INSUFFICIENT:授权数不足'
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否授权，1：是，0：否
                     */
                    uint64_t m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_AUTOAUTHORIZEDIMAGEINFO_H_
