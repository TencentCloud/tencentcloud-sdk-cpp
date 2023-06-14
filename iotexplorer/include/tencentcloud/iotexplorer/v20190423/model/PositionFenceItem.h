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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_POSITIONFENCEITEM_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_POSITIONFENCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 围栏信息
                */
                class PositionFenceItem : public AbstractModel
                {
                public:
                    PositionFenceItem();
                    ~PositionFenceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取围栏Id
                     * @return FenceId 围栏Id
                     * 
                     */
                    int64_t GetFenceId() const;

                    /**
                     * 设置围栏Id
                     * @param _fenceId 围栏Id
                     * 
                     */
                    void SetFenceId(const int64_t& _fenceId);

                    /**
                     * 判断参数 FenceId 是否已赋值
                     * @return FenceId 是否已赋值
                     * 
                     */
                    bool FenceIdHasBeenSet() const;

                    /**
                     * 获取位置空间Id
                     * @return SpaceId 位置空间Id
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置位置空间Id
                     * @param _spaceId 位置空间Id
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取围栏名称
                     * @return FenceName 围栏名称
                     * 
                     */
                    std::string GetFenceName() const;

                    /**
                     * 设置围栏名称
                     * @param _fenceName 围栏名称
                     * 
                     */
                    void SetFenceName(const std::string& _fenceName);

                    /**
                     * 判断参数 FenceName 是否已赋值
                     * @return FenceName 是否已赋值
                     * 
                     */
                    bool FenceNameHasBeenSet() const;

                    /**
                     * 获取围栏描述
                     * @return FenceDesc 围栏描述
                     * 
                     */
                    std::string GetFenceDesc() const;

                    /**
                     * 设置围栏描述
                     * @param _fenceDesc 围栏描述
                     * 
                     */
                    void SetFenceDesc(const std::string& _fenceDesc);

                    /**
                     * 判断参数 FenceDesc 是否已赋值
                     * @return FenceDesc 是否已赋值
                     * 
                     */
                    bool FenceDescHasBeenSet() const;

                    /**
                     * 获取围栏区域信息，采用 GeoJSON 格式
                     * @return FenceArea 围栏区域信息，采用 GeoJSON 格式
                     * 
                     */
                    std::string GetFenceArea() const;

                    /**
                     * 设置围栏区域信息，采用 GeoJSON 格式
                     * @param _fenceArea 围栏区域信息，采用 GeoJSON 格式
                     * 
                     */
                    void SetFenceArea(const std::string& _fenceArea);

                    /**
                     * 判断参数 FenceArea 是否已赋值
                     * @return FenceArea 是否已赋值
                     * 
                     */
                    bool FenceAreaHasBeenSet() const;

                private:

                    /**
                     * 围栏Id
                     */
                    int64_t m_fenceId;
                    bool m_fenceIdHasBeenSet;

                    /**
                     * 位置空间Id
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 围栏名称
                     */
                    std::string m_fenceName;
                    bool m_fenceNameHasBeenSet;

                    /**
                     * 围栏描述
                     */
                    std::string m_fenceDesc;
                    bool m_fenceDescHasBeenSet;

                    /**
                     * 围栏区域信息，采用 GeoJSON 格式
                     */
                    std::string m_fenceArea;
                    bool m_fenceAreaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_POSITIONFENCEITEM_H_
