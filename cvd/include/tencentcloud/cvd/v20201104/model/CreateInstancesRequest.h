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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_CREATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_CREATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/Disk.h>
#include <tencentcloud/cvd/v20201104/model/VirtualPrivateCloud.h>
#include <tencentcloud/cvd/v20201104/model/ChargePrepaid.h>
#include <tencentcloud/cvd/v20201104/model/Tag.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * CreateInstances请求参数结构体
                */
                class CreateInstancesRequest : public AbstractModel
                {
                public:
                    CreateInstancesRequest();
                    ~CreateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例类型。<li>  S3L.MEDIUM4: 云桌面-标准S3_2核4G </li><li> S3L.LARGE8: 云桌面-标准S3_4核8G </li><li> S3L.LARGE16: 云桌面-标准S3_4核16G </li><li> S3L.2XLARGE16: 云桌面-标准S3_8核16G </li><li> S1L.LARGE8：云桌面-标准S1_4核8G </li><li> S1L.LARGE16：标准S1_4核16G </li><li> S2L.2XLARGE16：标准S2_8核16G </li><li> G1L.LARGE16：图形G1_4核16G  </li><li> G1L.2XLARGE32：图形G1_8核32G </li><li> G1L.4XLARGE64：图形G1_16核64G </li><li> G2L.LARGE24: 云桌面-图形G2_6核24G </li><li> G2L.3XLARGE58: 云桌面-图形G2_14核58G </li><li> G2L.3XLARGE44: 云桌面-图形G2_12核44G </li><li> G3L.LARGE16: 云桌面-图形G3_4核16G </li><li> G3L.5XMEDIUM40: 云桌面-图形G3_10核40G </li><li> G3L.5XLARGE80: 云桌面-图形G3_20核80G </li><li> G4L.5XMEDIUM40: 云桌面-图形G4_10核40G </li><li> G4L.11XMEDIUM80: 云桌面-图形G4_22核80G </li><li> G4L.11XLARGE160: 云桌面-图形G4_44核160G </li><li> G5L.5XMEDIUM40: 云桌面-图形G5_10核40G </li><li> G5L.5XLARGE80: 云桌面-图形G5_22核80G </li><li> G5L.21XMEDIUM160: 云桌面-图形G5_42核160G </li><li> G5L.21XLARGE320: 云桌面-图形G5_84核320G </li><li> G6L.8XLARGE96: 云桌面-图形G6_32核96G </li></p><li> G6L.16XLARGE192: 云桌面-图形G6_64核192G </li><li> G6L.24XLARGE288: 云桌面-图形G6_96核288G </li><li> G6L.32XLARGE384: 云桌面-图形G6_128核384G </li><li> G6L.48XLARGE576: 云桌面-图形G6_192核576G </li><li> G6L.64XLARGE768: 云桌面-图形G6_256核768G </li><li> G6L.96XLARGE1152: 云桌面-图形G6_384核1152G </li><li> G6L.96XLARGE1536: 云桌面-图形G6_384核1536G </li><li> G6L.192XLARGE2304: 云桌面-图形G6_768核2304G </li><li> G6Ls.8XLARGE96: 云桌面-图形G6s_32核96G </li><li> G6Ls.16XLARGE192: 云桌面-图形G6s_64核192G </li><li> G6Ls.24XLARGE288: 云桌面-图形G6s_96核288G </li><li> G6Ls.32XLARGE384: 云桌面-图形G6s_128核384G </li><li> G6Ls.48XLARGE576: 云桌面-图形G6s_192核576G </li><li> G6Ls.64XLARGE768: 云桌面-图形G6s_256核768G </li><li> G6Ls.96XLARGE1152: 云桌面-图形G6s_384核1152G </li><li> G6Ls.96XLARGE1536: 云桌面-图形G6s_384核1536G </li><li> G6Ls.192XLARGE2304: 云桌面-图形G6s_768核2304G </li><li> G8L.8XLARGE96: 云桌面-图形G8_32核96G </li><li> G8L.12XLARGE192: 云桌面-图形G8_48核192G </li><li> G8L.16XLARGE192: 云桌面-图形G8_64核192G </li><li> G8L.24XLARGE384: 云桌面-图形G8_96核384G </li><li> G8L.32XLARGE384: 云桌面-图形G8_128核384G </li><li> G8L.48XLARGE768: 云桌面-图形G8_192核768G </li><li> G8L.64XLARGE768: 云桌面-图形G8_256核768G </li><li> G8L.96XLARGE1536: 云桌面-图形G8_384核1536G </li><li> G9L.12XLARGE192: 云桌面-图形G9_48核192G </li><li> G9L.24XLARGE384: 云桌面-图形G9_96核384G </li><li> G9L.48XLARGE768: 云桌面-图形G9_192核768G </li><li> G9L.96XLARGE1536: 云桌面-图形G9_384核1536G </li><p>枚举值：</p><ul><li>S3L.MEDIUM4： 云桌面-标准S3_2核4G</li><li>S3L.LARGE8： 云桌面-标准S3_4核8G</li><li>S3L.LARGE16： 云桌面-标准S3_4核16G</li><li>S3L.2XLARGE16： 云桌面-标准S3_8核16G</li><li>S1L.LARGE8： 云桌面-标准S1_4核8G</li><li>S1L.LARGE16： 标准S1_4核16G</li><li>S2L.2XLARGE16： 标准S2_8核16G</li><li>G1L.LARGE16： 图形G1_4核16G</li><li>G1L.2XLARGE32： 图形G1_8核32G</li><li>G1L.4XLARGE64： 图形G1_16核64G</li><li>G2L.LARGE24： 云桌面-图形G2_6核24G</li><li>G2L.3XLARGE58： 云桌面-图形G2_14核58G</li><li>G2L.3XLARGE44： 云桌面-图形G2_12核44G</li><li>G3L.LARGE16： 云桌面-图形G3_4核16G</li><li>G3L.5XMEDIUM40： 云桌面-图形G3_10核40G</li><li>G3L.5XLARGE80： 云桌面-图形G3_20核80G</li><li>G4L.5XMEDIUM40： 云桌面-图形G4_10核40G</li><li>G4L.11XMEDIUM80： 云桌面-图形G4_22核80G</li><li>G4L.11XLARGE160： 云桌面-图形G4_44核160G</li><li>G5L.5XMEDIUM40： 云桌面-图形G5_10核40G</li><li>G5L.5XLARGE80： 云桌面-图形G5_22核80G</li><li>G5L.21XMEDIUM160： 云桌面-图形G5_42核160G</li><li>G5L.21XLARGE320： 云桌面-图形G5_84核320G</li><li>G6L.8XLARGE96： 云桌面-图形G6_32核96G</li><li>G6L.16XLARGE192： 云桌面-图形G6_64核192G</li><li>G6L.24XLARGE288： 云桌面-图形G6_96核288G</li><li>G6L.32XLARGE384： 云桌面-图形G6_128核384G</li><li>G6L.48XLARGE576： 云桌面-图形G6_192核576G</li><li>G6L.64XLARGE768： 云桌面-图形G6_256核768G</li><li>G6L.96XLARGE1152： 云桌面-图形G6_384核1152G</li><li>G6L.96XLARGE1536： 云桌面-图形G6_384核1536G</li><li>G6L.192XLARGE2304： 云桌面-图形G6_768核2304G</li><li>G6Ls.8XLARGE96： 云桌面-图形G6s_32核96G</li><li>G6Ls.16XLARGE192： 云桌面-图形G6s_64核192G</li><li>G6Ls.24XLARGE288： 云桌面-图形G6s_96核288G</li><li>G6Ls.32XLARGE384： 云桌面-图形G6s_128核384G</li><li>G6Ls.48XLARGE576： 云桌面-图形G6s_192核576G</li><li>G6Ls.64XLARGE768： 云桌面-图形G6s_256核768G</li><li>G6Ls.96XLARGE1152： 云桌面-图形G6s_384核1152G</li><li>G6Ls.96XLARGE1536： 云桌面-图形G6s_384核1536G</li><li>G6Ls.192XLARGE2304： 云桌面-图形G6s_768核2304G</li><li>G8L.8XLARGE96： 云桌面-图形G8_32核96G</li><li>G8L.12XLARGE192： 云桌面-图形G8_48核192G</li><li>G8L.16XLARGE192： 云桌面-图形G8_64核192G</li><li>G8L.24XLARGE384： 云桌面-图形G8_96核384G</li><li>G8L.32XLARGE384： 云桌面-图形G8_128核384G</li><li>G8L.48XLARGE768： 云桌面-图形G8_192核768G</li><li>G8L.64XLARGE768： 云桌面-图形G8_256核768G</li><li>G8L.96XLARGE1536： 云桌面-图形G8_384核1536G</li><li>G9L.12XLARGE192： 云桌面-图形G9_48核192G</li><li>G9L.24XLARGE384： 云桌面-图形G9_96核384G</li><li>G9L.48XLARGE768： 云桌面-图形G9_192核768G</li><li>G9L.96XLARGE1536： 云桌面-图形G9_384核1536G</li></ul>
                     * @return InstanceType <p>实例类型。<li>  S3L.MEDIUM4: 云桌面-标准S3_2核4G </li><li> S3L.LARGE8: 云桌面-标准S3_4核8G </li><li> S3L.LARGE16: 云桌面-标准S3_4核16G </li><li> S3L.2XLARGE16: 云桌面-标准S3_8核16G </li><li> S1L.LARGE8：云桌面-标准S1_4核8G </li><li> S1L.LARGE16：标准S1_4核16G </li><li> S2L.2XLARGE16：标准S2_8核16G </li><li> G1L.LARGE16：图形G1_4核16G  </li><li> G1L.2XLARGE32：图形G1_8核32G </li><li> G1L.4XLARGE64：图形G1_16核64G </li><li> G2L.LARGE24: 云桌面-图形G2_6核24G </li><li> G2L.3XLARGE58: 云桌面-图形G2_14核58G </li><li> G2L.3XLARGE44: 云桌面-图形G2_12核44G </li><li> G3L.LARGE16: 云桌面-图形G3_4核16G </li><li> G3L.5XMEDIUM40: 云桌面-图形G3_10核40G </li><li> G3L.5XLARGE80: 云桌面-图形G3_20核80G </li><li> G4L.5XMEDIUM40: 云桌面-图形G4_10核40G </li><li> G4L.11XMEDIUM80: 云桌面-图形G4_22核80G </li><li> G4L.11XLARGE160: 云桌面-图形G4_44核160G </li><li> G5L.5XMEDIUM40: 云桌面-图形G5_10核40G </li><li> G5L.5XLARGE80: 云桌面-图形G5_22核80G </li><li> G5L.21XMEDIUM160: 云桌面-图形G5_42核160G </li><li> G5L.21XLARGE320: 云桌面-图形G5_84核320G </li><li> G6L.8XLARGE96: 云桌面-图形G6_32核96G </li></p><li> G6L.16XLARGE192: 云桌面-图形G6_64核192G </li><li> G6L.24XLARGE288: 云桌面-图形G6_96核288G </li><li> G6L.32XLARGE384: 云桌面-图形G6_128核384G </li><li> G6L.48XLARGE576: 云桌面-图形G6_192核576G </li><li> G6L.64XLARGE768: 云桌面-图形G6_256核768G </li><li> G6L.96XLARGE1152: 云桌面-图形G6_384核1152G </li><li> G6L.96XLARGE1536: 云桌面-图形G6_384核1536G </li><li> G6L.192XLARGE2304: 云桌面-图形G6_768核2304G </li><li> G6Ls.8XLARGE96: 云桌面-图形G6s_32核96G </li><li> G6Ls.16XLARGE192: 云桌面-图形G6s_64核192G </li><li> G6Ls.24XLARGE288: 云桌面-图形G6s_96核288G </li><li> G6Ls.32XLARGE384: 云桌面-图形G6s_128核384G </li><li> G6Ls.48XLARGE576: 云桌面-图形G6s_192核576G </li><li> G6Ls.64XLARGE768: 云桌面-图形G6s_256核768G </li><li> G6Ls.96XLARGE1152: 云桌面-图形G6s_384核1152G </li><li> G6Ls.96XLARGE1536: 云桌面-图形G6s_384核1536G </li><li> G6Ls.192XLARGE2304: 云桌面-图形G6s_768核2304G </li><li> G8L.8XLARGE96: 云桌面-图形G8_32核96G </li><li> G8L.12XLARGE192: 云桌面-图形G8_48核192G </li><li> G8L.16XLARGE192: 云桌面-图形G8_64核192G </li><li> G8L.24XLARGE384: 云桌面-图形G8_96核384G </li><li> G8L.32XLARGE384: 云桌面-图形G8_128核384G </li><li> G8L.48XLARGE768: 云桌面-图形G8_192核768G </li><li> G8L.64XLARGE768: 云桌面-图形G8_256核768G </li><li> G8L.96XLARGE1536: 云桌面-图形G8_384核1536G </li><li> G9L.12XLARGE192: 云桌面-图形G9_48核192G </li><li> G9L.24XLARGE384: 云桌面-图形G9_96核384G </li><li> G9L.48XLARGE768: 云桌面-图形G9_192核768G </li><li> G9L.96XLARGE1536: 云桌面-图形G9_384核1536G </li><p>枚举值：</p><ul><li>S3L.MEDIUM4： 云桌面-标准S3_2核4G</li><li>S3L.LARGE8： 云桌面-标准S3_4核8G</li><li>S3L.LARGE16： 云桌面-标准S3_4核16G</li><li>S3L.2XLARGE16： 云桌面-标准S3_8核16G</li><li>S1L.LARGE8： 云桌面-标准S1_4核8G</li><li>S1L.LARGE16： 标准S1_4核16G</li><li>S2L.2XLARGE16： 标准S2_8核16G</li><li>G1L.LARGE16： 图形G1_4核16G</li><li>G1L.2XLARGE32： 图形G1_8核32G</li><li>G1L.4XLARGE64： 图形G1_16核64G</li><li>G2L.LARGE24： 云桌面-图形G2_6核24G</li><li>G2L.3XLARGE58： 云桌面-图形G2_14核58G</li><li>G2L.3XLARGE44： 云桌面-图形G2_12核44G</li><li>G3L.LARGE16： 云桌面-图形G3_4核16G</li><li>G3L.5XMEDIUM40： 云桌面-图形G3_10核40G</li><li>G3L.5XLARGE80： 云桌面-图形G3_20核80G</li><li>G4L.5XMEDIUM40： 云桌面-图形G4_10核40G</li><li>G4L.11XMEDIUM80： 云桌面-图形G4_22核80G</li><li>G4L.11XLARGE160： 云桌面-图形G4_44核160G</li><li>G5L.5XMEDIUM40： 云桌面-图形G5_10核40G</li><li>G5L.5XLARGE80： 云桌面-图形G5_22核80G</li><li>G5L.21XMEDIUM160： 云桌面-图形G5_42核160G</li><li>G5L.21XLARGE320： 云桌面-图形G5_84核320G</li><li>G6L.8XLARGE96： 云桌面-图形G6_32核96G</li><li>G6L.16XLARGE192： 云桌面-图形G6_64核192G</li><li>G6L.24XLARGE288： 云桌面-图形G6_96核288G</li><li>G6L.32XLARGE384： 云桌面-图形G6_128核384G</li><li>G6L.48XLARGE576： 云桌面-图形G6_192核576G</li><li>G6L.64XLARGE768： 云桌面-图形G6_256核768G</li><li>G6L.96XLARGE1152： 云桌面-图形G6_384核1152G</li><li>G6L.96XLARGE1536： 云桌面-图形G6_384核1536G</li><li>G6L.192XLARGE2304： 云桌面-图形G6_768核2304G</li><li>G6Ls.8XLARGE96： 云桌面-图形G6s_32核96G</li><li>G6Ls.16XLARGE192： 云桌面-图形G6s_64核192G</li><li>G6Ls.24XLARGE288： 云桌面-图形G6s_96核288G</li><li>G6Ls.32XLARGE384： 云桌面-图形G6s_128核384G</li><li>G6Ls.48XLARGE576： 云桌面-图形G6s_192核576G</li><li>G6Ls.64XLARGE768： 云桌面-图形G6s_256核768G</li><li>G6Ls.96XLARGE1152： 云桌面-图形G6s_384核1152G</li><li>G6Ls.96XLARGE1536： 云桌面-图形G6s_384核1536G</li><li>G6Ls.192XLARGE2304： 云桌面-图形G6s_768核2304G</li><li>G8L.8XLARGE96： 云桌面-图形G8_32核96G</li><li>G8L.12XLARGE192： 云桌面-图形G8_48核192G</li><li>G8L.16XLARGE192： 云桌面-图形G8_64核192G</li><li>G8L.24XLARGE384： 云桌面-图形G8_96核384G</li><li>G8L.32XLARGE384： 云桌面-图形G8_128核384G</li><li>G8L.48XLARGE768： 云桌面-图形G8_192核768G</li><li>G8L.64XLARGE768： 云桌面-图形G8_256核768G</li><li>G8L.96XLARGE1536： 云桌面-图形G8_384核1536G</li><li>G9L.12XLARGE192： 云桌面-图形G9_48核192G</li><li>G9L.24XLARGE384： 云桌面-图形G9_96核384G</li><li>G9L.48XLARGE768： 云桌面-图形G9_192核768G</li><li>G9L.96XLARGE1536： 云桌面-图形G9_384核1536G</li></ul>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型。<li>  S3L.MEDIUM4: 云桌面-标准S3_2核4G </li><li> S3L.LARGE8: 云桌面-标准S3_4核8G </li><li> S3L.LARGE16: 云桌面-标准S3_4核16G </li><li> S3L.2XLARGE16: 云桌面-标准S3_8核16G </li><li> S1L.LARGE8：云桌面-标准S1_4核8G </li><li> S1L.LARGE16：标准S1_4核16G </li><li> S2L.2XLARGE16：标准S2_8核16G </li><li> G1L.LARGE16：图形G1_4核16G  </li><li> G1L.2XLARGE32：图形G1_8核32G </li><li> G1L.4XLARGE64：图形G1_16核64G </li><li> G2L.LARGE24: 云桌面-图形G2_6核24G </li><li> G2L.3XLARGE58: 云桌面-图形G2_14核58G </li><li> G2L.3XLARGE44: 云桌面-图形G2_12核44G </li><li> G3L.LARGE16: 云桌面-图形G3_4核16G </li><li> G3L.5XMEDIUM40: 云桌面-图形G3_10核40G </li><li> G3L.5XLARGE80: 云桌面-图形G3_20核80G </li><li> G4L.5XMEDIUM40: 云桌面-图形G4_10核40G </li><li> G4L.11XMEDIUM80: 云桌面-图形G4_22核80G </li><li> G4L.11XLARGE160: 云桌面-图形G4_44核160G </li><li> G5L.5XMEDIUM40: 云桌面-图形G5_10核40G </li><li> G5L.5XLARGE80: 云桌面-图形G5_22核80G </li><li> G5L.21XMEDIUM160: 云桌面-图形G5_42核160G </li><li> G5L.21XLARGE320: 云桌面-图形G5_84核320G </li><li> G6L.8XLARGE96: 云桌面-图形G6_32核96G </li></p><li> G6L.16XLARGE192: 云桌面-图形G6_64核192G </li><li> G6L.24XLARGE288: 云桌面-图形G6_96核288G </li><li> G6L.32XLARGE384: 云桌面-图形G6_128核384G </li><li> G6L.48XLARGE576: 云桌面-图形G6_192核576G </li><li> G6L.64XLARGE768: 云桌面-图形G6_256核768G </li><li> G6L.96XLARGE1152: 云桌面-图形G6_384核1152G </li><li> G6L.96XLARGE1536: 云桌面-图形G6_384核1536G </li><li> G6L.192XLARGE2304: 云桌面-图形G6_768核2304G </li><li> G6Ls.8XLARGE96: 云桌面-图形G6s_32核96G </li><li> G6Ls.16XLARGE192: 云桌面-图形G6s_64核192G </li><li> G6Ls.24XLARGE288: 云桌面-图形G6s_96核288G </li><li> G6Ls.32XLARGE384: 云桌面-图形G6s_128核384G </li><li> G6Ls.48XLARGE576: 云桌面-图形G6s_192核576G </li><li> G6Ls.64XLARGE768: 云桌面-图形G6s_256核768G </li><li> G6Ls.96XLARGE1152: 云桌面-图形G6s_384核1152G </li><li> G6Ls.96XLARGE1536: 云桌面-图形G6s_384核1536G </li><li> G6Ls.192XLARGE2304: 云桌面-图形G6s_768核2304G </li><li> G8L.8XLARGE96: 云桌面-图形G8_32核96G </li><li> G8L.12XLARGE192: 云桌面-图形G8_48核192G </li><li> G8L.16XLARGE192: 云桌面-图形G8_64核192G </li><li> G8L.24XLARGE384: 云桌面-图形G8_96核384G </li><li> G8L.32XLARGE384: 云桌面-图形G8_128核384G </li><li> G8L.48XLARGE768: 云桌面-图形G8_192核768G </li><li> G8L.64XLARGE768: 云桌面-图形G8_256核768G </li><li> G8L.96XLARGE1536: 云桌面-图形G8_384核1536G </li><li> G9L.12XLARGE192: 云桌面-图形G9_48核192G </li><li> G9L.24XLARGE384: 云桌面-图形G9_96核384G </li><li> G9L.48XLARGE768: 云桌面-图形G9_192核768G </li><li> G9L.96XLARGE1536: 云桌面-图形G9_384核1536G </li><p>枚举值：</p><ul><li>S3L.MEDIUM4： 云桌面-标准S3_2核4G</li><li>S3L.LARGE8： 云桌面-标准S3_4核8G</li><li>S3L.LARGE16： 云桌面-标准S3_4核16G</li><li>S3L.2XLARGE16： 云桌面-标准S3_8核16G</li><li>S1L.LARGE8： 云桌面-标准S1_4核8G</li><li>S1L.LARGE16： 标准S1_4核16G</li><li>S2L.2XLARGE16： 标准S2_8核16G</li><li>G1L.LARGE16： 图形G1_4核16G</li><li>G1L.2XLARGE32： 图形G1_8核32G</li><li>G1L.4XLARGE64： 图形G1_16核64G</li><li>G2L.LARGE24： 云桌面-图形G2_6核24G</li><li>G2L.3XLARGE58： 云桌面-图形G2_14核58G</li><li>G2L.3XLARGE44： 云桌面-图形G2_12核44G</li><li>G3L.LARGE16： 云桌面-图形G3_4核16G</li><li>G3L.5XMEDIUM40： 云桌面-图形G3_10核40G</li><li>G3L.5XLARGE80： 云桌面-图形G3_20核80G</li><li>G4L.5XMEDIUM40： 云桌面-图形G4_10核40G</li><li>G4L.11XMEDIUM80： 云桌面-图形G4_22核80G</li><li>G4L.11XLARGE160： 云桌面-图形G4_44核160G</li><li>G5L.5XMEDIUM40： 云桌面-图形G5_10核40G</li><li>G5L.5XLARGE80： 云桌面-图形G5_22核80G</li><li>G5L.21XMEDIUM160： 云桌面-图形G5_42核160G</li><li>G5L.21XLARGE320： 云桌面-图形G5_84核320G</li><li>G6L.8XLARGE96： 云桌面-图形G6_32核96G</li><li>G6L.16XLARGE192： 云桌面-图形G6_64核192G</li><li>G6L.24XLARGE288： 云桌面-图形G6_96核288G</li><li>G6L.32XLARGE384： 云桌面-图形G6_128核384G</li><li>G6L.48XLARGE576： 云桌面-图形G6_192核576G</li><li>G6L.64XLARGE768： 云桌面-图形G6_256核768G</li><li>G6L.96XLARGE1152： 云桌面-图形G6_384核1152G</li><li>G6L.96XLARGE1536： 云桌面-图形G6_384核1536G</li><li>G6L.192XLARGE2304： 云桌面-图形G6_768核2304G</li><li>G6Ls.8XLARGE96： 云桌面-图形G6s_32核96G</li><li>G6Ls.16XLARGE192： 云桌面-图形G6s_64核192G</li><li>G6Ls.24XLARGE288： 云桌面-图形G6s_96核288G</li><li>G6Ls.32XLARGE384： 云桌面-图形G6s_128核384G</li><li>G6Ls.48XLARGE576： 云桌面-图形G6s_192核576G</li><li>G6Ls.64XLARGE768： 云桌面-图形G6s_256核768G</li><li>G6Ls.96XLARGE1152： 云桌面-图形G6s_384核1152G</li><li>G6Ls.96XLARGE1536： 云桌面-图形G6s_384核1536G</li><li>G6Ls.192XLARGE2304： 云桌面-图形G6s_768核2304G</li><li>G8L.8XLARGE96： 云桌面-图形G8_32核96G</li><li>G8L.12XLARGE192： 云桌面-图形G8_48核192G</li><li>G8L.16XLARGE192： 云桌面-图形G8_64核192G</li><li>G8L.24XLARGE384： 云桌面-图形G8_96核384G</li><li>G8L.32XLARGE384： 云桌面-图形G8_128核384G</li><li>G8L.48XLARGE768： 云桌面-图形G8_192核768G</li><li>G8L.64XLARGE768： 云桌面-图形G8_256核768G</li><li>G8L.96XLARGE1536： 云桌面-图形G8_384核1536G</li><li>G9L.12XLARGE192： 云桌面-图形G9_48核192G</li><li>G9L.24XLARGE384： 云桌面-图形G9_96核384G</li><li>G9L.48XLARGE768： 云桌面-图形G9_192核768G</li><li>G9L.96XLARGE1536： 云桌面-图形G9_384核1536G</li></ul>
                     * @param _instanceType <p>实例类型。<li>  S3L.MEDIUM4: 云桌面-标准S3_2核4G </li><li> S3L.LARGE8: 云桌面-标准S3_4核8G </li><li> S3L.LARGE16: 云桌面-标准S3_4核16G </li><li> S3L.2XLARGE16: 云桌面-标准S3_8核16G </li><li> S1L.LARGE8：云桌面-标准S1_4核8G </li><li> S1L.LARGE16：标准S1_4核16G </li><li> S2L.2XLARGE16：标准S2_8核16G </li><li> G1L.LARGE16：图形G1_4核16G  </li><li> G1L.2XLARGE32：图形G1_8核32G </li><li> G1L.4XLARGE64：图形G1_16核64G </li><li> G2L.LARGE24: 云桌面-图形G2_6核24G </li><li> G2L.3XLARGE58: 云桌面-图形G2_14核58G </li><li> G2L.3XLARGE44: 云桌面-图形G2_12核44G </li><li> G3L.LARGE16: 云桌面-图形G3_4核16G </li><li> G3L.5XMEDIUM40: 云桌面-图形G3_10核40G </li><li> G3L.5XLARGE80: 云桌面-图形G3_20核80G </li><li> G4L.5XMEDIUM40: 云桌面-图形G4_10核40G </li><li> G4L.11XMEDIUM80: 云桌面-图形G4_22核80G </li><li> G4L.11XLARGE160: 云桌面-图形G4_44核160G </li><li> G5L.5XMEDIUM40: 云桌面-图形G5_10核40G </li><li> G5L.5XLARGE80: 云桌面-图形G5_22核80G </li><li> G5L.21XMEDIUM160: 云桌面-图形G5_42核160G </li><li> G5L.21XLARGE320: 云桌面-图形G5_84核320G </li><li> G6L.8XLARGE96: 云桌面-图形G6_32核96G </li></p><li> G6L.16XLARGE192: 云桌面-图形G6_64核192G </li><li> G6L.24XLARGE288: 云桌面-图形G6_96核288G </li><li> G6L.32XLARGE384: 云桌面-图形G6_128核384G </li><li> G6L.48XLARGE576: 云桌面-图形G6_192核576G </li><li> G6L.64XLARGE768: 云桌面-图形G6_256核768G </li><li> G6L.96XLARGE1152: 云桌面-图形G6_384核1152G </li><li> G6L.96XLARGE1536: 云桌面-图形G6_384核1536G </li><li> G6L.192XLARGE2304: 云桌面-图形G6_768核2304G </li><li> G6Ls.8XLARGE96: 云桌面-图形G6s_32核96G </li><li> G6Ls.16XLARGE192: 云桌面-图形G6s_64核192G </li><li> G6Ls.24XLARGE288: 云桌面-图形G6s_96核288G </li><li> G6Ls.32XLARGE384: 云桌面-图形G6s_128核384G </li><li> G6Ls.48XLARGE576: 云桌面-图形G6s_192核576G </li><li> G6Ls.64XLARGE768: 云桌面-图形G6s_256核768G </li><li> G6Ls.96XLARGE1152: 云桌面-图形G6s_384核1152G </li><li> G6Ls.96XLARGE1536: 云桌面-图形G6s_384核1536G </li><li> G6Ls.192XLARGE2304: 云桌面-图形G6s_768核2304G </li><li> G8L.8XLARGE96: 云桌面-图形G8_32核96G </li><li> G8L.12XLARGE192: 云桌面-图形G8_48核192G </li><li> G8L.16XLARGE192: 云桌面-图形G8_64核192G </li><li> G8L.24XLARGE384: 云桌面-图形G8_96核384G </li><li> G8L.32XLARGE384: 云桌面-图形G8_128核384G </li><li> G8L.48XLARGE768: 云桌面-图形G8_192核768G </li><li> G8L.64XLARGE768: 云桌面-图形G8_256核768G </li><li> G8L.96XLARGE1536: 云桌面-图形G8_384核1536G </li><li> G9L.12XLARGE192: 云桌面-图形G9_48核192G </li><li> G9L.24XLARGE384: 云桌面-图形G9_96核384G </li><li> G9L.48XLARGE768: 云桌面-图形G9_192核768G </li><li> G9L.96XLARGE1536: 云桌面-图形G9_384核1536G </li><p>枚举值：</p><ul><li>S3L.MEDIUM4： 云桌面-标准S3_2核4G</li><li>S3L.LARGE8： 云桌面-标准S3_4核8G</li><li>S3L.LARGE16： 云桌面-标准S3_4核16G</li><li>S3L.2XLARGE16： 云桌面-标准S3_8核16G</li><li>S1L.LARGE8： 云桌面-标准S1_4核8G</li><li>S1L.LARGE16： 标准S1_4核16G</li><li>S2L.2XLARGE16： 标准S2_8核16G</li><li>G1L.LARGE16： 图形G1_4核16G</li><li>G1L.2XLARGE32： 图形G1_8核32G</li><li>G1L.4XLARGE64： 图形G1_16核64G</li><li>G2L.LARGE24： 云桌面-图形G2_6核24G</li><li>G2L.3XLARGE58： 云桌面-图形G2_14核58G</li><li>G2L.3XLARGE44： 云桌面-图形G2_12核44G</li><li>G3L.LARGE16： 云桌面-图形G3_4核16G</li><li>G3L.5XMEDIUM40： 云桌面-图形G3_10核40G</li><li>G3L.5XLARGE80： 云桌面-图形G3_20核80G</li><li>G4L.5XMEDIUM40： 云桌面-图形G4_10核40G</li><li>G4L.11XMEDIUM80： 云桌面-图形G4_22核80G</li><li>G4L.11XLARGE160： 云桌面-图形G4_44核160G</li><li>G5L.5XMEDIUM40： 云桌面-图形G5_10核40G</li><li>G5L.5XLARGE80： 云桌面-图形G5_22核80G</li><li>G5L.21XMEDIUM160： 云桌面-图形G5_42核160G</li><li>G5L.21XLARGE320： 云桌面-图形G5_84核320G</li><li>G6L.8XLARGE96： 云桌面-图形G6_32核96G</li><li>G6L.16XLARGE192： 云桌面-图形G6_64核192G</li><li>G6L.24XLARGE288： 云桌面-图形G6_96核288G</li><li>G6L.32XLARGE384： 云桌面-图形G6_128核384G</li><li>G6L.48XLARGE576： 云桌面-图形G6_192核576G</li><li>G6L.64XLARGE768： 云桌面-图形G6_256核768G</li><li>G6L.96XLARGE1152： 云桌面-图形G6_384核1152G</li><li>G6L.96XLARGE1536： 云桌面-图形G6_384核1536G</li><li>G6L.192XLARGE2304： 云桌面-图形G6_768核2304G</li><li>G6Ls.8XLARGE96： 云桌面-图形G6s_32核96G</li><li>G6Ls.16XLARGE192： 云桌面-图形G6s_64核192G</li><li>G6Ls.24XLARGE288： 云桌面-图形G6s_96核288G</li><li>G6Ls.32XLARGE384： 云桌面-图形G6s_128核384G</li><li>G6Ls.48XLARGE576： 云桌面-图形G6s_192核576G</li><li>G6Ls.64XLARGE768： 云桌面-图形G6s_256核768G</li><li>G6Ls.96XLARGE1152： 云桌面-图形G6s_384核1152G</li><li>G6Ls.96XLARGE1536： 云桌面-图形G6s_384核1536G</li><li>G6Ls.192XLARGE2304： 云桌面-图形G6s_768核2304G</li><li>G8L.8XLARGE96： 云桌面-图形G8_32核96G</li><li>G8L.12XLARGE192： 云桌面-图形G8_48核192G</li><li>G8L.16XLARGE192： 云桌面-图形G8_64核192G</li><li>G8L.24XLARGE384： 云桌面-图形G8_96核384G</li><li>G8L.32XLARGE384： 云桌面-图形G8_128核384G</li><li>G8L.48XLARGE768： 云桌面-图形G8_192核768G</li><li>G8L.64XLARGE768： 云桌面-图形G8_256核768G</li><li>G8L.96XLARGE1536： 云桌面-图形G8_384核1536G</li><li>G9L.12XLARGE192： 云桌面-图形G9_48核192G</li><li>G9L.24XLARGE384： 云桌面-图形G9_96核384G</li><li>G9L.48XLARGE768： 云桌面-图形G9_192核768G</li><li>G9L.96XLARGE1536： 云桌面-图形G9_384核1536G</li></ul>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>系统盘信息</p>
                     * @return SystemDisk <p>系统盘信息</p>
                     * 
                     */
                    Disk GetSystemDisk() const;

                    /**
                     * 设置<p>系统盘信息</p>
                     * @param _systemDisk <p>系统盘信息</p>
                     * 
                     */
                    void SetSystemDisk(const Disk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取<p>镜像ID</p>
                     * @return ImageId <p>镜像ID</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>镜像ID</p>
                     * @param _imageId <p>镜像ID</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。</p>
                     * @return VirtualPrivateCloud <p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。</p>
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置<p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。</p>
                     * @param _virtualPrivateCloud <p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。</p>
                     * 
                     */
                    void SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud);

                    /**
                     * 判断参数 VirtualPrivateCloud 是否已赋值
                     * @return VirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool VirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取<p>实例显示名称。</p><li> 如果该字段为空，则采用默认格式：云桌面型号+月日+三位随机数+镜像ID。</li><li> 购买多台实例，如果指定模式串{R:x}，表示生成数字[x, x+n-1]，其中n表示购买实例的数量，例如server_{R:3}，购买1台时，实例显示名称为server_3；购买2台时，实例显示名称分别为server_3，server_4。支持指定多个模式串{R:x}。</li><li> 购买多台实例，如果不指定模式串，则在实例显示名称添加后缀1、2...n，其中n表示购买实例的数量，例如server_，购买2台时，实例显示名称分别为server_1，server_2。</li><li> 最多支持60个字符（包含模式串）。</li>
                     * @return InstanceName <p>实例显示名称。</p><li> 如果该字段为空，则采用默认格式：云桌面型号+月日+三位随机数+镜像ID。</li><li> 购买多台实例，如果指定模式串{R:x}，表示生成数字[x, x+n-1]，其中n表示购买实例的数量，例如server_{R:3}，购买1台时，实例显示名称为server_3；购买2台时，实例显示名称分别为server_3，server_4。支持指定多个模式串{R:x}。</li><li> 购买多台实例，如果不指定模式串，则在实例显示名称添加后缀1、2...n，其中n表示购买实例的数量，例如server_，购买2台时，实例显示名称分别为server_1，server_2。</li><li> 最多支持60个字符（包含模式串）。</li>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例显示名称。</p><li> 如果该字段为空，则采用默认格式：云桌面型号+月日+三位随机数+镜像ID。</li><li> 购买多台实例，如果指定模式串{R:x}，表示生成数字[x, x+n-1]，其中n表示购买实例的数量，例如server_{R:3}，购买1台时，实例显示名称为server_3；购买2台时，实例显示名称分别为server_3，server_4。支持指定多个模式串{R:x}。</li><li> 购买多台实例，如果不指定模式串，则在实例显示名称添加后缀1、2...n，其中n表示购买实例的数量，例如server_，购买2台时，实例显示名称分别为server_1，server_2。</li><li> 最多支持60个字符（包含模式串）。</li>
                     * @param _instanceName <p>实例显示名称。</p><li> 如果该字段为空，则采用默认格式：云桌面型号+月日+三位随机数+镜像ID。</li><li> 购买多台实例，如果指定模式串{R:x}，表示生成数字[x, x+n-1]，其中n表示购买实例的数量，例如server_{R:3}，购买1台时，实例显示名称为server_3；购买2台时，实例显示名称分别为server_3，server_4。支持指定多个模式串{R:x}。</li><li> 购买多台实例，如果不指定模式串，则在实例显示名称添加后缀1、2...n，其中n表示购买实例的数量，例如server_，购买2台时，实例显示名称分别为server_1，server_2。</li><li> 最多支持60个字符（包含模式串）。</li>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>购买实例数量。取值范围[1,50]。默认为1</p>
                     * @return InstanceCount <p>购买实例数量。取值范围[1,50]。默认为1</p>
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置<p>购买实例数量。取值范围[1,50]。默认为1</p>
                     * @param _instanceCount <p>购买实例数量。取值范围[1,50]。默认为1</p>
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>数据盘信息。目前只支持一块数据盘。</p>
                     * @return DataDisks <p>数据盘信息。目前只支持一块数据盘。</p>
                     * 
                     */
                    std::vector<Disk> GetDataDisks() const;

                    /**
                     * 设置<p>数据盘信息。目前只支持一块数据盘。</p>
                     * @param _dataDisks <p>数据盘信息。目前只支持一块数据盘。</p>
                     * 
                     */
                    void SetDataDisks(const std::vector<Disk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取<p>实例计费类型。</p><li> PREPAID：预付费，即包年包月</li><li> POSTPAID_BY_HOUR：按小时后付费</li>默认为PREPAID
                     * @return ChargeType <p>实例计费类型。</p><li> PREPAID：预付费，即包年包月</li><li> POSTPAID_BY_HOUR：按小时后付费</li>默认为PREPAID
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>实例计费类型。</p><li> PREPAID：预付费，即包年包月</li><li> POSTPAID_BY_HOUR：按小时后付费</li>默认为PREPAID
                     * @param _chargeType <p>实例计费类型。</p><li> PREPAID：预付费，即包年包月</li><li> POSTPAID_BY_HOUR：按小时后付费</li>默认为PREPAID
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * @return ChargePrepaid <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * 
                     */
                    ChargePrepaid GetChargePrepaid() const;

                    /**
                     * 设置<p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * @param _chargePrepaid <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * 
                     */
                    void SetChargePrepaid(const ChargePrepaid& _chargePrepaid);

                    /**
                     * 判断参数 ChargePrepaid 是否已赋值
                     * @return ChargePrepaid 是否已赋值
                     * 
                     */
                    bool ChargePrepaidHasBeenSet() const;

                    /**
                     * 获取<p>是否只预检此次请求。</p><li> true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和库存。如果检查通过，则返回的错误码为DryRunOperation；如果返回其他错误码表示检查没有通过；</li><li> false（默认）：发送正常请求，通过检查后直接创建实例</li>
                     * @return DryRun <p>是否只预检此次请求。</p><li> true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和库存。如果检查通过，则返回的错误码为DryRunOperation；如果返回其他错误码表示检查没有通过；</li><li> false（默认）：发送正常请求，通过检查后直接创建实例</li>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置<p>是否只预检此次请求。</p><li> true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和库存。如果检查通过，则返回的错误码为DryRunOperation；如果返回其他错误码表示检查没有通过；</li><li> false（默认）：发送正常请求，通过检查后直接创建实例</li>
                     * @param _dryRun <p>是否只预检此次请求。</p><li> true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和库存。如果检查通过，则返回的错误码为DryRunOperation；如果返回其他错误码表示检查没有通过；</li><li> false（默认）：发送正常请求，通过检查后直接创建实例</li>
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取<p>允许绑定用户前的匿名访问。默认值：false。</p>
                     * @return AnonymousAccess <p>允许绑定用户前的匿名访问。默认值：false。</p>
                     * 
                     */
                    bool GetAnonymousAccess() const;

                    /**
                     * 设置<p>允许绑定用户前的匿名访问。默认值：false。</p>
                     * @param _anonymousAccess <p>允许绑定用户前的匿名访问。默认值：false。</p>
                     * 
                     */
                    void SetAnonymousAccess(const bool& _anonymousAccess);

                    /**
                     * 判断参数 AnonymousAccess 是否已赋值
                     * @return AnonymousAccess 是否已赋值
                     * 
                     */
                    bool AnonymousAccessHasBeenSet() const;

                    /**
                     * 获取<p>关联的安全组ID列表</p>
                     * @return SecurityGroups <p>关联的安全组ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置<p>关联的安全组ID列表</p>
                     * @param _securityGroups <p>关联的安全组ID列表</p>
                     * 
                     */
                    void SetSecurityGroups(const std::vector<std::string>& _securityGroups);

                    /**
                     * 判断参数 SecurityGroups 是否已赋值
                     * @return SecurityGroups 是否已赋值
                     * 
                     */
                    bool SecurityGroupsHasBeenSet() const;

                    /**
                     * 获取<p>桌面池ID</p>
                     * @return PoolId <p>桌面池ID</p>
                     * 
                     */
                    std::string GetPoolId() const;

                    /**
                     * 设置<p>桌面池ID</p>
                     * @param _poolId <p>桌面池ID</p>
                     * 
                     */
                    void SetPoolId(const std::string& _poolId);

                    /**
                     * 判断参数 PoolId 是否已赋值
                     * @return PoolId 是否已赋值
                     * 
                     */
                    bool PoolIdHasBeenSet() const;

                    /**
                     * 获取<p>域名管控策略ID</p>
                     * @return DomainControlPolicies <p>域名管控策略ID</p>
                     * 
                     */
                    std::vector<std::string> GetDomainControlPolicies() const;

                    /**
                     * 设置<p>域名管控策略ID</p>
                     * @param _domainControlPolicies <p>域名管控策略ID</p>
                     * 
                     */
                    void SetDomainControlPolicies(const std::vector<std::string>& _domainControlPolicies);

                    /**
                     * 判断参数 DomainControlPolicies 是否已赋值
                     * @return DomainControlPolicies 是否已赋值
                     * 
                     */
                    bool DomainControlPoliciesHasBeenSet() const;

                    /**
                     * 获取<p>标签，最多10个</p>
                     * @return Tags <p>标签，最多10个</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签，最多10个</p>
                     * @param _tags <p>标签，最多10个</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * <p>实例类型。<li>  S3L.MEDIUM4: 云桌面-标准S3_2核4G </li><li> S3L.LARGE8: 云桌面-标准S3_4核8G </li><li> S3L.LARGE16: 云桌面-标准S3_4核16G </li><li> S3L.2XLARGE16: 云桌面-标准S3_8核16G </li><li> S1L.LARGE8：云桌面-标准S1_4核8G </li><li> S1L.LARGE16：标准S1_4核16G </li><li> S2L.2XLARGE16：标准S2_8核16G </li><li> G1L.LARGE16：图形G1_4核16G  </li><li> G1L.2XLARGE32：图形G1_8核32G </li><li> G1L.4XLARGE64：图形G1_16核64G </li><li> G2L.LARGE24: 云桌面-图形G2_6核24G </li><li> G2L.3XLARGE58: 云桌面-图形G2_14核58G </li><li> G2L.3XLARGE44: 云桌面-图形G2_12核44G </li><li> G3L.LARGE16: 云桌面-图形G3_4核16G </li><li> G3L.5XMEDIUM40: 云桌面-图形G3_10核40G </li><li> G3L.5XLARGE80: 云桌面-图形G3_20核80G </li><li> G4L.5XMEDIUM40: 云桌面-图形G4_10核40G </li><li> G4L.11XMEDIUM80: 云桌面-图形G4_22核80G </li><li> G4L.11XLARGE160: 云桌面-图形G4_44核160G </li><li> G5L.5XMEDIUM40: 云桌面-图形G5_10核40G </li><li> G5L.5XLARGE80: 云桌面-图形G5_22核80G </li><li> G5L.21XMEDIUM160: 云桌面-图形G5_42核160G </li><li> G5L.21XLARGE320: 云桌面-图形G5_84核320G </li><li> G6L.8XLARGE96: 云桌面-图形G6_32核96G </li></p><li> G6L.16XLARGE192: 云桌面-图形G6_64核192G </li><li> G6L.24XLARGE288: 云桌面-图形G6_96核288G </li><li> G6L.32XLARGE384: 云桌面-图形G6_128核384G </li><li> G6L.48XLARGE576: 云桌面-图形G6_192核576G </li><li> G6L.64XLARGE768: 云桌面-图形G6_256核768G </li><li> G6L.96XLARGE1152: 云桌面-图形G6_384核1152G </li><li> G6L.96XLARGE1536: 云桌面-图形G6_384核1536G </li><li> G6L.192XLARGE2304: 云桌面-图形G6_768核2304G </li><li> G6Ls.8XLARGE96: 云桌面-图形G6s_32核96G </li><li> G6Ls.16XLARGE192: 云桌面-图形G6s_64核192G </li><li> G6Ls.24XLARGE288: 云桌面-图形G6s_96核288G </li><li> G6Ls.32XLARGE384: 云桌面-图形G6s_128核384G </li><li> G6Ls.48XLARGE576: 云桌面-图形G6s_192核576G </li><li> G6Ls.64XLARGE768: 云桌面-图形G6s_256核768G </li><li> G6Ls.96XLARGE1152: 云桌面-图形G6s_384核1152G </li><li> G6Ls.96XLARGE1536: 云桌面-图形G6s_384核1536G </li><li> G6Ls.192XLARGE2304: 云桌面-图形G6s_768核2304G </li><li> G8L.8XLARGE96: 云桌面-图形G8_32核96G </li><li> G8L.12XLARGE192: 云桌面-图形G8_48核192G </li><li> G8L.16XLARGE192: 云桌面-图形G8_64核192G </li><li> G8L.24XLARGE384: 云桌面-图形G8_96核384G </li><li> G8L.32XLARGE384: 云桌面-图形G8_128核384G </li><li> G8L.48XLARGE768: 云桌面-图形G8_192核768G </li><li> G8L.64XLARGE768: 云桌面-图形G8_256核768G </li><li> G8L.96XLARGE1536: 云桌面-图形G8_384核1536G </li><li> G9L.12XLARGE192: 云桌面-图形G9_48核192G </li><li> G9L.24XLARGE384: 云桌面-图形G9_96核384G </li><li> G9L.48XLARGE768: 云桌面-图形G9_192核768G </li><li> G9L.96XLARGE1536: 云桌面-图形G9_384核1536G </li><p>枚举值：</p><ul><li>S3L.MEDIUM4： 云桌面-标准S3_2核4G</li><li>S3L.LARGE8： 云桌面-标准S3_4核8G</li><li>S3L.LARGE16： 云桌面-标准S3_4核16G</li><li>S3L.2XLARGE16： 云桌面-标准S3_8核16G</li><li>S1L.LARGE8： 云桌面-标准S1_4核8G</li><li>S1L.LARGE16： 标准S1_4核16G</li><li>S2L.2XLARGE16： 标准S2_8核16G</li><li>G1L.LARGE16： 图形G1_4核16G</li><li>G1L.2XLARGE32： 图形G1_8核32G</li><li>G1L.4XLARGE64： 图形G1_16核64G</li><li>G2L.LARGE24： 云桌面-图形G2_6核24G</li><li>G2L.3XLARGE58： 云桌面-图形G2_14核58G</li><li>G2L.3XLARGE44： 云桌面-图形G2_12核44G</li><li>G3L.LARGE16： 云桌面-图形G3_4核16G</li><li>G3L.5XMEDIUM40： 云桌面-图形G3_10核40G</li><li>G3L.5XLARGE80： 云桌面-图形G3_20核80G</li><li>G4L.5XMEDIUM40： 云桌面-图形G4_10核40G</li><li>G4L.11XMEDIUM80： 云桌面-图形G4_22核80G</li><li>G4L.11XLARGE160： 云桌面-图形G4_44核160G</li><li>G5L.5XMEDIUM40： 云桌面-图形G5_10核40G</li><li>G5L.5XLARGE80： 云桌面-图形G5_22核80G</li><li>G5L.21XMEDIUM160： 云桌面-图形G5_42核160G</li><li>G5L.21XLARGE320： 云桌面-图形G5_84核320G</li><li>G6L.8XLARGE96： 云桌面-图形G6_32核96G</li><li>G6L.16XLARGE192： 云桌面-图形G6_64核192G</li><li>G6L.24XLARGE288： 云桌面-图形G6_96核288G</li><li>G6L.32XLARGE384： 云桌面-图形G6_128核384G</li><li>G6L.48XLARGE576： 云桌面-图形G6_192核576G</li><li>G6L.64XLARGE768： 云桌面-图形G6_256核768G</li><li>G6L.96XLARGE1152： 云桌面-图形G6_384核1152G</li><li>G6L.96XLARGE1536： 云桌面-图形G6_384核1536G</li><li>G6L.192XLARGE2304： 云桌面-图形G6_768核2304G</li><li>G6Ls.8XLARGE96： 云桌面-图形G6s_32核96G</li><li>G6Ls.16XLARGE192： 云桌面-图形G6s_64核192G</li><li>G6Ls.24XLARGE288： 云桌面-图形G6s_96核288G</li><li>G6Ls.32XLARGE384： 云桌面-图形G6s_128核384G</li><li>G6Ls.48XLARGE576： 云桌面-图形G6s_192核576G</li><li>G6Ls.64XLARGE768： 云桌面-图形G6s_256核768G</li><li>G6Ls.96XLARGE1152： 云桌面-图形G6s_384核1152G</li><li>G6Ls.96XLARGE1536： 云桌面-图形G6s_384核1536G</li><li>G6Ls.192XLARGE2304： 云桌面-图形G6s_768核2304G</li><li>G8L.8XLARGE96： 云桌面-图形G8_32核96G</li><li>G8L.12XLARGE192： 云桌面-图形G8_48核192G</li><li>G8L.16XLARGE192： 云桌面-图形G8_64核192G</li><li>G8L.24XLARGE384： 云桌面-图形G8_96核384G</li><li>G8L.32XLARGE384： 云桌面-图形G8_128核384G</li><li>G8L.48XLARGE768： 云桌面-图形G8_192核768G</li><li>G8L.64XLARGE768： 云桌面-图形G8_256核768G</li><li>G8L.96XLARGE1536： 云桌面-图形G8_384核1536G</li><li>G9L.12XLARGE192： 云桌面-图形G9_48核192G</li><li>G9L.24XLARGE384： 云桌面-图形G9_96核384G</li><li>G9L.48XLARGE768： 云桌面-图形G9_192核768G</li><li>G9L.96XLARGE1536： 云桌面-图形G9_384核1536G</li></ul>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>系统盘信息</p>
                     */
                    Disk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>镜像ID</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。</p>
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * <p>实例显示名称。</p><li> 如果该字段为空，则采用默认格式：云桌面型号+月日+三位随机数+镜像ID。</li><li> 购买多台实例，如果指定模式串{R:x}，表示生成数字[x, x+n-1]，其中n表示购买实例的数量，例如server_{R:3}，购买1台时，实例显示名称为server_3；购买2台时，实例显示名称分别为server_3，server_4。支持指定多个模式串{R:x}。</li><li> 购买多台实例，如果不指定模式串，则在实例显示名称添加后缀1、2...n，其中n表示购买实例的数量，例如server_，购买2台时，实例显示名称分别为server_1，server_2。</li><li> 最多支持60个字符（包含模式串）。</li>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>购买实例数量。取值范围[1,50]。默认为1</p>
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>数据盘信息。目前只支持一块数据盘。</p>
                     */
                    std::vector<Disk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * <p>实例计费类型。</p><li> PREPAID：预付费，即包年包月</li><li> POSTPAID_BY_HOUR：按小时后付费</li>默认为PREPAID
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     */
                    ChargePrepaid m_chargePrepaid;
                    bool m_chargePrepaidHasBeenSet;

                    /**
                     * <p>是否只预检此次请求。</p><li> true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和库存。如果检查通过，则返回的错误码为DryRunOperation；如果返回其他错误码表示检查没有通过；</li><li> false（默认）：发送正常请求，通过检查后直接创建实例</li>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * <p>允许绑定用户前的匿名访问。默认值：false。</p>
                     */
                    bool m_anonymousAccess;
                    bool m_anonymousAccessHasBeenSet;

                    /**
                     * <p>关联的安全组ID列表</p>
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                    /**
                     * <p>桌面池ID</p>
                     */
                    std::string m_poolId;
                    bool m_poolIdHasBeenSet;

                    /**
                     * <p>域名管控策略ID</p>
                     */
                    std::vector<std::string> m_domainControlPolicies;
                    bool m_domainControlPoliciesHasBeenSet;

                    /**
                     * <p>标签，最多10个</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_CREATEINSTANCESREQUEST_H_
