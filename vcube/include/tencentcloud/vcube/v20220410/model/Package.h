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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_PACKAGE_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_PACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * 资源包结构
                */
                class Package : public AbstractModel
                {
                public:
                    Package();
                    ~Package() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源包Id
                     * @return Id 资源包Id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置资源包Id
                     * @param _id 资源包Id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取资源包资源Id
                     * @return BizResourceId 资源包资源Id
                     * 
                     */
                    std::string GetBizResourceId() const;

                    /**
                     * 设置资源包资源Id
                     * @param _bizResourceId 资源包资源Id
                     * 
                     */
                    void SetBizResourceId(const std::string& _bizResourceId);

                    /**
                     * 判断参数 BizResourceId 是否已赋值
                     * @return BizResourceId 是否已赋值
                     * 
                     */
                    bool BizResourceIdHasBeenSet() const;

                    /**
                     * 获取站点 中国站还是国际站
                     * @return Site 站点 中国站还是国际站
                     * 
                     */
                    std::string GetSite() const;

                    /**
                     * 设置站点 中国站还是国际站
                     * @param _site 站点 中国站还是国际站
                     * 
                     */
                    void SetSite(const std::string& _site);

                    /**
                     * 判断参数 Site 是否已赋值
                     * @return Site 是否已赋值
                     * 
                     */
                    bool SiteHasBeenSet() const;

                    /**
                     * 获取资源包开始生效时间
                     * @return StartTime 资源包开始生效时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置资源包开始生效时间
                     * @param _startTime 资源包开始生效时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取资源包过期时间
                     * @return EndTime 资源包过期时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置资源包过期时间
                     * @param _endTime 资源包过期时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取资源包退费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefundTime 资源包退费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRefundTime() const;

                    /**
                     * 设置资源包退费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refundTime 资源包退费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefundTime(const std::string& _refundTime);

                    /**
                     * 判断参数 RefundTime 是否已赋值
                     * @return RefundTime 是否已赋值
                     * 
                     */
                    bool RefundTimeHasBeenSet() const;

                    /**
                     * 获取资源包名称
                     * @return Name 资源包名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资源包名称
                     * @param _name 资源包名称
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
                     * 获取资源包类型ID,对应点播：PackageId 对应直播：TypeId
                     * @return Type 资源包类型ID,对应点播：PackageId 对应直播：TypeId
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置资源包类型ID,对应点播：PackageId 对应直播：TypeId
                     * @param _type 资源包类型ID,对应点播：PackageId 对应直播：TypeId
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 资源包Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 资源包资源Id
                     */
                    std::string m_bizResourceId;
                    bool m_bizResourceIdHasBeenSet;

                    /**
                     * 站点 中国站还是国际站
                     */
                    std::string m_site;
                    bool m_siteHasBeenSet;

                    /**
                     * 资源包开始生效时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 资源包过期时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 资源包退费时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_refundTime;
                    bool m_refundTimeHasBeenSet;

                    /**
                     * 资源包名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 资源包类型ID,对应点播：PackageId 对应直播：TypeId
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_PACKAGE_H_
