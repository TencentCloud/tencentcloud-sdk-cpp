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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_DESCRIBEIMAGESRESPONSE_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_DESCRIBEIMAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiia/v20190529/model/ImageInfo.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * DescribeImages返回参数结构体
                */
                class DescribeImagesResponse : public AbstractModel
                {
                public:
                    DescribeImagesResponse();
                    ~DescribeImagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取图库名称。
                     * @return GroupId 图库名称。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取物品ID。
                     * @return EntityId 物品ID。
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取图片信息。
                     * @return ImageInfos 图片信息。
                     * 
                     */
                    std::vector<ImageInfo> GetImageInfos() const;

                    /**
                     * 判断参数 ImageInfos 是否已赋值
                     * @return ImageInfos 是否已赋值
                     * 
                     */
                    bool ImageInfosHasBeenSet() const;

                private:

                    /**
                     * 图库名称。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 物品ID。
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * 图片信息。
                     */
                    std::vector<ImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_DESCRIBEIMAGESRESPONSE_H_
