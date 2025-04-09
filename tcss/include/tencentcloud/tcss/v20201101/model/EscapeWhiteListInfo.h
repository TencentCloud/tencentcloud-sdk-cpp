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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPEWHITELISTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPEWHITELISTINFO_H_

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
                * 逃逸白名单
                */
                class EscapeWhiteListInfo : public AbstractModel
                {
                public:
                    EscapeWhiteListInfo();
                    ~EscapeWhiteListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像ID
                     * @return ImageID 镜像ID
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置镜像ID
                     * @param _imageID 镜像ID
                     * 
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

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
                     * 获取白名单记录ID
                     * @return ID 白名单记录ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置白名单记录ID
                     * @param _iD 白名单记录ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取关联主机数量（包含普通节点和超级节点数量）
                     * @return HostCount 关联主机数量（包含普通节点和超级节点数量）
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置关联主机数量（包含普通节点和超级节点数量）
                     * @param _hostCount 关联主机数量（包含普通节点和超级节点数量）
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取关联超级节点数量
                     * @return SuperNodeCount 关联超级节点数量
                     * 
                     */
                    int64_t GetSuperNodeCount() const;

                    /**
                     * 设置关联超级节点数量
                     * @param _superNodeCount 关联超级节点数量
                     * 
                     */
                    void SetSuperNodeCount(const int64_t& _superNodeCount);

                    /**
                     * 判断参数 SuperNodeCount 是否已赋值
                     * @return SuperNodeCount 是否已赋值
                     * 
                     */
                    bool SuperNodeCountHasBeenSet() const;

                    /**
                     * 获取关联容器数量
                     * @return ContainerCount 关联容器数量
                     * 
                     */
                    int64_t GetContainerCount() const;

                    /**
                     * 设置关联容器数量
                     * @param _containerCount 关联容器数量
                     * 
                     */
                    void SetContainerCount(const int64_t& _containerCount);

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     * 
                     */
                    bool ContainerCountHasBeenSet() const;

                    /**
                     * 获取加白事件类型
                     * @return EventType 加白事件类型
                     * 
                     */
                    std::vector<std::string> GetEventType() const;

                    /**
                     * 设置加白事件类型
                     * @param _eventType 加白事件类型
                     * 
                     */
                    void SetEventType(const std::vector<std::string>& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return InsertTime 创建时间
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置创建时间
                     * @param _insertTime 创建时间
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取镜像大小
                     * @return ImageSize 镜像大小
                     * 
                     */
                    int64_t GetImageSize() const;

                    /**
                     * 设置镜像大小
                     * @param _imageSize 镜像大小
                     * 
                     */
                    void SetImageSize(const int64_t& _imageSize);

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                private:

                    /**
                     * 镜像ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 白名单记录ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 关联主机数量（包含普通节点和超级节点数量）
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * 关联超级节点数量
                     */
                    int64_t m_superNodeCount;
                    bool m_superNodeCountHasBeenSet;

                    /**
                     * 关联容器数量
                     */
                    int64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                    /**
                     * 加白事件类型
                     */
                    std::vector<std::string> m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 镜像大小
                     */
                    int64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPEWHITELISTINFO_H_
