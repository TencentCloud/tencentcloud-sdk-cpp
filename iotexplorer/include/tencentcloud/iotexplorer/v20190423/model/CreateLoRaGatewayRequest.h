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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATELORAGATEWAYREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATELORAGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/LoRaGatewayLocation.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * CreateLoRaGateway请求参数结构体
                */
                class CreateLoRaGatewayRequest : public AbstractModel
                {
                public:
                    CreateLoRaGatewayRequest();
                    ~CreateLoRaGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取LoRa 网关Id
                     * @return GatewayId LoRa 网关Id
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置LoRa 网关Id
                     * @param _gatewayId LoRa 网关Id
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取网关名称
                     * @return Name 网关名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置网关名称
                     * @param _name 网关名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取详情描述
                     * @return Description 详情描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置详情描述
                     * @param _description 详情描述
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
                     * 获取位置坐标
                     * @return Location 位置坐标
                     * 
                     */
                    LoRaGatewayLocation GetLocation() const;

                    /**
                     * 设置位置坐标
                     * @param _location 位置坐标
                     * 
                     */
                    void SetLocation(const LoRaGatewayLocation& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取位置信息
                     * @return Position 位置信息
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置位置信息
                     * @param _position 位置信息
                     * 
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取位置详情
                     * @return PositionDetails 位置详情
                     * 
                     */
                    std::string GetPositionDetails() const;

                    /**
                     * 设置位置详情
                     * @param _positionDetails 位置详情
                     * 
                     */
                    void SetPositionDetails(const std::string& _positionDetails);

                    /**
                     * 判断参数 PositionDetails 是否已赋值
                     * @return PositionDetails 是否已赋值
                     * 
                     */
                    bool PositionDetailsHasBeenSet() const;

                    /**
                     * 获取是否公开
                     * @return IsPublic 是否公开
                     * 
                     */
                    bool GetIsPublic() const;

                    /**
                     * 设置是否公开
                     * @param _isPublic 是否公开
                     * 
                     */
                    void SetIsPublic(const bool& _isPublic);

                    /**
                     * 判断参数 IsPublic 是否已赋值
                     * @return IsPublic 是否已赋值
                     * 
                     */
                    bool IsPublicHasBeenSet() const;

                    /**
                     * 获取频点ID
                     * @return FrequencyId 频点ID
                     * 
                     */
                    std::string GetFrequencyId() const;

                    /**
                     * 设置频点ID
                     * @param _frequencyId 频点ID
                     * 
                     */
                    void SetFrequencyId(const std::string& _frequencyId);

                    /**
                     * 判断参数 FrequencyId 是否已赋值
                     * @return FrequencyId 是否已赋值
                     * 
                     */
                    bool FrequencyIdHasBeenSet() const;

                private:

                    /**
                     * LoRa 网关Id
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 网关名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 详情描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 位置坐标
                     */
                    LoRaGatewayLocation m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 位置信息
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 位置详情
                     */
                    std::string m_positionDetails;
                    bool m_positionDetailsHasBeenSet;

                    /**
                     * 是否公开
                     */
                    bool m_isPublic;
                    bool m_isPublicHasBeenSet;

                    /**
                     * 频点ID
                     */
                    std::string m_frequencyId;
                    bool m_frequencyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATELORAGATEWAYREQUEST_H_
