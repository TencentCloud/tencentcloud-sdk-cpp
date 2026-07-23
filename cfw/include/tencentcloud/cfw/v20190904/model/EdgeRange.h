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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_EDGERANGE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_EDGERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * vpc间防火墙规则生效范围列表
                */
                class EdgeRange : public AbstractModel
                {
                public:
                    EdgeRange();
                    ~EdgeRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则生效的范围id，是在哪对vpc之间还是针对所有vpc间生效
                     * @return EdgeId 规则生效的范围id，是在哪对vpc之间还是针对所有vpc间生效
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置规则生效的范围id，是在哪对vpc之间还是针对所有vpc间生效
                     * @param _edgeId 规则生效的范围id，是在哪对vpc之间还是针对所有vpc间生效
                     * 
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     * 
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取EdgeId对应的名称
                     * @return EdgeName EdgeId对应的名称
                     * 
                     */
                    std::string GetEdgeName() const;

                    /**
                     * 设置EdgeId对应的名称
                     * @param _edgeName EdgeId对应的名称
                     * 
                     */
                    void SetEdgeName(const std::string& _edgeName);

                    /**
                     * 判断参数 EdgeName 是否已赋值
                     * @return EdgeName 是否已赋值
                     * 
                     */
                    bool EdgeNameHasBeenSet() const;

                    /**
                     * 获取本端网络实例Id
                     * @return SrcId 本端网络实例Id
                     * 
                     */
                    std::string GetSrcId() const;

                    /**
                     * 设置本端网络实例Id
                     * @param _srcId 本端网络实例Id
                     * 
                     */
                    void SetSrcId(const std::string& _srcId);

                    /**
                     * 判断参数 SrcId 是否已赋值
                     * @return SrcId 是否已赋值
                     * 
                     */
                    bool SrcIdHasBeenSet() const;

                    /**
                     * 获取本端网络实例所属地域
                     * @return SrcRegion 本端网络实例所属地域
                     * 
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置本端网络实例所属地域
                     * @param _srcRegion 本端网络实例所属地域
                     * 
                     */
                    void SetSrcRegion(const std::string& _srcRegion);

                    /**
                     * 判断参数 SrcRegion 是否已赋值
                     * @return SrcRegion 是否已赋值
                     * 
                     */
                    bool SrcRegionHasBeenSet() const;

                    /**
                     * 获取本端网络实例名称
                     * @return SrcName 本端网络实例名称
                     * 
                     */
                    std::string GetSrcName() const;

                    /**
                     * 设置本端网络实例名称
                     * @param _srcName 本端网络实例名称
                     * 
                     */
                    void SetSrcName(const std::string& _srcName);

                    /**
                     * 判断参数 SrcName 是否已赋值
                     * @return SrcName 是否已赋值
                     * 
                     */
                    bool SrcNameHasBeenSet() const;

                    /**
                     * 获取本端网络实例cidr，多个以逗号分隔
                     * @return SrcCidr 本端网络实例cidr，多个以逗号分隔
                     * 
                     */
                    std::string GetSrcCidr() const;

                    /**
                     * 设置本端网络实例cidr，多个以逗号分隔
                     * @param _srcCidr 本端网络实例cidr，多个以逗号分隔
                     * 
                     */
                    void SetSrcCidr(const std::string& _srcCidr);

                    /**
                     * 判断参数 SrcCidr 是否已赋值
                     * @return SrcCidr 是否已赋值
                     * 
                     */
                    bool SrcCidrHasBeenSet() const;

                    /**
                     * 获取对端网络实例Id
                     * @return DstId 对端网络实例Id
                     * 
                     */
                    std::string GetDstId() const;

                    /**
                     * 设置对端网络实例Id
                     * @param _dstId 对端网络实例Id
                     * 
                     */
                    void SetDstId(const std::string& _dstId);

                    /**
                     * 判断参数 DstId 是否已赋值
                     * @return DstId 是否已赋值
                     * 
                     */
                    bool DstIdHasBeenSet() const;

                    /**
                     * 获取对端网络实例所属地域
                     * @return DstRegion 对端网络实例所属地域
                     * 
                     */
                    std::string GetDstRegion() const;

                    /**
                     * 设置对端网络实例所属地域
                     * @param _dstRegion 对端网络实例所属地域
                     * 
                     */
                    void SetDstRegion(const std::string& _dstRegion);

                    /**
                     * 判断参数 DstRegion 是否已赋值
                     * @return DstRegion 是否已赋值
                     * 
                     */
                    bool DstRegionHasBeenSet() const;

                    /**
                     * 获取对端网络实例名称
                     * @return DstName 对端网络实例名称
                     * 
                     */
                    std::string GetDstName() const;

                    /**
                     * 设置对端网络实例名称
                     * @param _dstName 对端网络实例名称
                     * 
                     */
                    void SetDstName(const std::string& _dstName);

                    /**
                     * 判断参数 DstName 是否已赋值
                     * @return DstName 是否已赋值
                     * 
                     */
                    bool DstNameHasBeenSet() const;

                    /**
                     * 获取对端网络实例cidr，多个以逗号分隔
                     * @return DstCidr 对端网络实例cidr，多个以逗号分隔
                     * 
                     */
                    std::string GetDstCidr() const;

                    /**
                     * 设置对端网络实例cidr，多个以逗号分隔
                     * @param _dstCidr 对端网络实例cidr，多个以逗号分隔
                     * 
                     */
                    void SetDstCidr(const std::string& _dstCidr);

                    /**
                     * 判断参数 DstCidr 是否已赋值
                     * @return DstCidr 是否已赋值
                     * 
                     */
                    bool DstCidrHasBeenSet() const;

                private:

                    /**
                     * 规则生效的范围id，是在哪对vpc之间还是针对所有vpc间生效
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * EdgeId对应的名称
                     */
                    std::string m_edgeName;
                    bool m_edgeNameHasBeenSet;

                    /**
                     * 本端网络实例Id
                     */
                    std::string m_srcId;
                    bool m_srcIdHasBeenSet;

                    /**
                     * 本端网络实例所属地域
                     */
                    std::string m_srcRegion;
                    bool m_srcRegionHasBeenSet;

                    /**
                     * 本端网络实例名称
                     */
                    std::string m_srcName;
                    bool m_srcNameHasBeenSet;

                    /**
                     * 本端网络实例cidr，多个以逗号分隔
                     */
                    std::string m_srcCidr;
                    bool m_srcCidrHasBeenSet;

                    /**
                     * 对端网络实例Id
                     */
                    std::string m_dstId;
                    bool m_dstIdHasBeenSet;

                    /**
                     * 对端网络实例所属地域
                     */
                    std::string m_dstRegion;
                    bool m_dstRegionHasBeenSet;

                    /**
                     * 对端网络实例名称
                     */
                    std::string m_dstName;
                    bool m_dstNameHasBeenSet;

                    /**
                     * 对端网络实例cidr，多个以逗号分隔
                     */
                    std::string m_dstCidr;
                    bool m_dstCidrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_EDGERANGE_H_
