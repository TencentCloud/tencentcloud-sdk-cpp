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

#ifndef TENCENTCLOUD_ICR_V20211014_MODEL_REQMETADATA_H_
#define TENCENTCLOUD_ICR_V20211014_MODEL_REQMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/icr/v20211014/model/ReqMetadataLBS.h>
#include <tencentcloud/icr/v20211014/model/ReqMetadataVagrant.h>


namespace TencentCloud
{
    namespace Icr
    {
        namespace V20211014
        {
            namespace Model
            {
                /**
                * 请求的Metadata
                */
                class ReqMetadata : public AbstractModel
                {
                public:
                    ReqMetadata();
                    ~ReqMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道
                     * @return ChannelID 渠道
                     * 
                     */
                    std::string GetChannelID() const;

                    /**
                     * 设置渠道
                     * @param _channelID 渠道
                     * 
                     */
                    void SetChannelID(const std::string& _channelID);

                    /**
                     * 判断参数 ChannelID 是否已赋值
                     * @return ChannelID 是否已赋值
                     * 
                     */
                    bool ChannelIDHasBeenSet() const;

                    /**
                     * 获取无
                     * @return BusinessName 无
                     * 
                     */
                    std::string GetBusinessName() const;

                    /**
                     * 设置无
                     * @param _businessName 无
                     * 
                     */
                    void SetBusinessName(const std::string& _businessName);

                    /**
                     * 判断参数 BusinessName 是否已赋值
                     * @return BusinessName 是否已赋值
                     * 
                     */
                    bool BusinessNameHasBeenSet() const;

                    /**
                     * 获取无
                     * @return GUID 无
                     * 
                     */
                    std::string GetGUID() const;

                    /**
                     * 设置无
                     * @param _gUID 无
                     * 
                     */
                    void SetGUID(const std::string& _gUID);

                    /**
                     * 判断参数 GUID 是否已赋值
                     * @return GUID 是否已赋值
                     * 
                     */
                    bool GUIDHasBeenSet() const;

                    /**
                     * 获取无
                     * @return AppKey 无
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置无
                     * @param _appKey 无
                     * 
                     */
                    void SetAppKey(const std::string& _appKey);

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取位置定位服务
                     * @return LBS 位置定位服务
                     * 
                     */
                    ReqMetadataLBS GetLBS() const;

                    /**
                     * 设置位置定位服务
                     * @param _lBS 位置定位服务
                     * 
                     */
                    void SetLBS(const ReqMetadataLBS& _lBS);

                    /**
                     * 判断参数 LBS 是否已赋值
                     * @return LBS 是否已赋值
                     * 
                     */
                    bool LBSHasBeenSet() const;

                    /**
                     * 获取透传字段
                     * @return Vagrants 透传字段
                     * 
                     */
                    std::vector<ReqMetadataVagrant> GetVagrants() const;

                    /**
                     * 设置透传字段
                     * @param _vagrants 透传字段
                     * 
                     */
                    void SetVagrants(const std::vector<ReqMetadataVagrant>& _vagrants);

                    /**
                     * 判断参数 Vagrants 是否已赋值
                     * @return Vagrants 是否已赋值
                     * 
                     */
                    bool VagrantsHasBeenSet() const;

                private:

                    /**
                     * 渠道
                     */
                    std::string m_channelID;
                    bool m_channelIDHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_businessName;
                    bool m_businessNameHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_gUID;
                    bool m_gUIDHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * 位置定位服务
                     */
                    ReqMetadataLBS m_lBS;
                    bool m_lBSHasBeenSet;

                    /**
                     * 透传字段
                     */
                    std::vector<ReqMetadataVagrant> m_vagrants;
                    bool m_vagrantsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ICR_V20211014_MODEL_REQMETADATA_H_
