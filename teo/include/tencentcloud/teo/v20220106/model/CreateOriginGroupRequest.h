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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CREATEORIGINGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CREATEORIGINGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/OriginRecord.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * CreateOriginGroup请求参数结构体
                */
                class CreateOriginGroupRequest : public AbstractModel
                {
                public:
                    CreateOriginGroupRequest();
                    ~CreateOriginGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源站组名称
                     * @return OriginName 源站组名称
                     */
                    std::string GetOriginName() const;

                    /**
                     * 设置源站组名称
                     * @param OriginName 源站组名称
                     */
                    void SetOriginName(const std::string& _originName);

                    /**
                     * 判断参数 OriginName 是否已赋值
                     * @return OriginName 是否已赋值
                     */
                    bool OriginNameHasBeenSet() const;

                    /**
                     * 获取配置类型，当OriginType=self 时，需要填写：
area: 按区域配置
weight: 按权重配置
当OriginType=third_party/cos 时，不需要填写
                     * @return Type 配置类型，当OriginType=self 时，需要填写：
area: 按区域配置
weight: 按权重配置
当OriginType=third_party/cos 时，不需要填写
                     */
                    std::string GetType() const;

                    /**
                     * 设置配置类型，当OriginType=self 时，需要填写：
area: 按区域配置
weight: 按权重配置
当OriginType=third_party/cos 时，不需要填写
                     * @param Type 配置类型，当OriginType=self 时，需要填写：
area: 按区域配置
weight: 按权重配置
当OriginType=third_party/cos 时，不需要填写
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取源站记录
                     * @return Record 源站记录
                     */
                    std::vector<OriginRecord> GetRecord() const;

                    /**
                     * 设置源站记录
                     * @param Record 源站记录
                     */
                    void SetRecord(const std::vector<OriginRecord>& _record);

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取站点ID
                     * @return ZoneId 站点ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID
                     * @param ZoneId 站点ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取源站类型
self：自有源站
third_party：第三方源站
cos：腾讯云COS源站
                     * @return OriginType 源站类型
self：自有源站
third_party：第三方源站
cos：腾讯云COS源站
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置源站类型
self：自有源站
third_party：第三方源站
cos：腾讯云COS源站
                     * @param OriginType 源站类型
self：自有源站
third_party：第三方源站
cos：腾讯云COS源站
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     */
                    bool OriginTypeHasBeenSet() const;

                private:

                    /**
                     * 源站组名称
                     */
                    std::string m_originName;
                    bool m_originNameHasBeenSet;

                    /**
                     * 配置类型，当OriginType=self 时，需要填写：
area: 按区域配置
weight: 按权重配置
当OriginType=third_party/cos 时，不需要填写
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 源站记录
                     */
                    std::vector<OriginRecord> m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * 站点ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 源站类型
self：自有源站
third_party：第三方源站
cos：腾讯云COS源站
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CREATEORIGINGROUPREQUEST_H_
