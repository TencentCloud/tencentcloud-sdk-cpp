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

#ifndef TENCENTCLOUD_EIS_V20210601_MODEL_ABSTRACTRUNTIMEMC_H_
#define TENCENTCLOUD_EIS_V20210601_MODEL_ABSTRACTRUNTIMEMC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20210601
        {
            namespace Model
            {
                /**
                * 运行时精简信息
                */
                class AbstractRuntimeMC : public AbstractModel
                {
                public:
                    AbstractRuntimeMC();
                    ~AbstractRuntimeMC() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运行时id
                     * @return RuntimeId 运行时id
                     */
                    int64_t GetRuntimeId() const;

                    /**
                     * 设置运行时id
                     * @param RuntimeId 运行时id
                     */
                    void SetRuntimeId(const int64_t& _runtimeId);

                    /**
                     * 判断参数 RuntimeId 是否已赋值
                     * @return RuntimeId 是否已赋值
                     */
                    bool RuntimeIdHasBeenSet() const;

                    /**
                     * 获取运行时名称，用户输入，同一uin内唯一
                     * @return DisplayName 运行时名称，用户输入，同一uin内唯一
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置运行时名称，用户输入，同一uin内唯一
                     * @param DisplayName 运行时名称，用户输入，同一uin内唯一
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取运行时类型：0: sandbox, 1:shared, 2:private
                     * @return Type 运行时类型：0: sandbox, 1:shared, 2:private
                     */
                    int64_t GetType() const;

                    /**
                     * 设置运行时类型：0: sandbox, 1:shared, 2:private
                     * @param Type 运行时类型：0: sandbox, 1:shared, 2:private
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取运行时所在地域，tianjin，beijiing，guangzhou等
                     * @return Zone 运行时所在地域，tianjin，beijiing，guangzhou等
                     */
                    std::string GetZone() const;

                    /**
                     * 设置运行时所在地域，tianjin，beijiing，guangzhou等
                     * @param Zone 运行时所在地域，tianjin，beijiing，guangzhou等
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取运行时所在地域，tianjin，beijiing，guangzhou等（同Zone）
                     * @return Area 运行时所在地域，tianjin，beijiing，guangzhou等（同Zone）
                     */
                    std::string GetArea() const;

                    /**
                     * 设置运行时所在地域，tianjin，beijiing，guangzhou等（同Zone）
                     * @param Area 运行时所在地域，tianjin，beijiing，guangzhou等（同Zone）
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取运行时应用listener地址后缀
                     * @return Addr 运行时应用listener地址后缀
                     */
                    std::string GetAddr() const;

                    /**
                     * 设置运行时应用listener地址后缀
                     * @param Addr 运行时应用listener地址后缀
                     */
                    void SetAddr(const std::string& _addr);

                    /**
                     * 判断参数 Addr 是否已赋值
                     * @return Addr 是否已赋值
                     */
                    bool AddrHasBeenSet() const;

                private:

                    /**
                     * 运行时id
                     */
                    int64_t m_runtimeId;
                    bool m_runtimeIdHasBeenSet;

                    /**
                     * 运行时名称，用户输入，同一uin内唯一
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 运行时类型：0: sandbox, 1:shared, 2:private
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 运行时所在地域，tianjin，beijiing，guangzhou等
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 运行时所在地域，tianjin，beijiing，guangzhou等（同Zone）
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 运行时应用listener地址后缀
                     */
                    std::string m_addr;
                    bool m_addrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20210601_MODEL_ABSTRACTRUNTIMEMC_H_
