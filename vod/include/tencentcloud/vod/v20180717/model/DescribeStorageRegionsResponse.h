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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEREGIONSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEREGIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/StorageRegionInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeStorageRegions返回参数结构体
                */
                class DescribeStorageRegionsResponse : public AbstractModel
                {
                public:
                    DescribeStorageRegionsResponse();
                    ~DescribeStorageRegionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取存储地域信息列表。
                     * @return StorageRegionInfos 存储地域信息列表。
                     * 
                     */
                    std::vector<StorageRegionInfo> GetStorageRegionInfos() const;

                    /**
                     * 判断参数 StorageRegionInfos 是否已赋值
                     * @return StorageRegionInfos 是否已赋值
                     * 
                     */
                    bool StorageRegionInfosHasBeenSet() const;

                private:

                    /**
                     * 存储地域信息列表。
                     */
                    std::vector<StorageRegionInfo> m_storageRegionInfos;
                    bool m_storageRegionInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEREGIONSRESPONSE_H_
