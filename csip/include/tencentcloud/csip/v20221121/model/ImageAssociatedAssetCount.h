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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSOCIATEDASSETCOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSOCIATEDASSETCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 镜像关联资产数
                */
                class ImageAssociatedAssetCount : public AbstractModel
                {
                public:
                    ImageAssociatedAssetCount();
                    ~ImageAssociatedAssetCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>镜像id</p>
                     * @return Id <p>镜像id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>镜像id</p>
                     * @param _id <p>镜像id</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>镜像关联主机数</p>
                     * @return HostCount <p>镜像关联主机数</p>
                     * 
                     */
                    uint64_t GetHostCount() const;

                    /**
                     * 设置<p>镜像关联主机数</p>
                     * @param _hostCount <p>镜像关联主机数</p>
                     * 
                     */
                    void SetHostCount(const uint64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取<p>镜像关联容器数</p>
                     * @return ContainerCount <p>镜像关联容器数</p>
                     * 
                     */
                    uint64_t GetContainerCount() const;

                    /**
                     * 设置<p>镜像关联容器数</p>
                     * @param _containerCount <p>镜像关联容器数</p>
                     * 
                     */
                    void SetContainerCount(const uint64_t& _containerCount);

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     * 
                     */
                    bool ContainerCountHasBeenSet() const;

                    /**
                     * 获取<p>镜像所属账号名</p>
                     * @return OwnerAccountName <p>镜像所属账号名</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>镜像所属账号名</p>
                     * @param _ownerAccountName <p>镜像所属账号名</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>镜像所属账号appid</p>
                     * @return OwnerAppId <p>镜像所属账号appid</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>镜像所属账号appid</p>
                     * @param _ownerAppId <p>镜像所属账号appid</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>镜像所属账号uin</p>
                     * @return OwnerUin <p>镜像所属账号uin</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>镜像所属账号uin</p>
                     * @param _ownerUin <p>镜像所属账号uin</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                private:

                    /**
                     * <p>镜像id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>镜像关联主机数</p>
                     */
                    uint64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * <p>镜像关联容器数</p>
                     */
                    uint64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                    /**
                     * <p>镜像所属账号名</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>镜像所属账号appid</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>镜像所属账号uin</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSOCIATEDASSETCOUNT_H_
