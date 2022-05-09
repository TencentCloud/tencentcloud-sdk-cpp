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

#ifndef TENCENTCLOUD_TIIA_V20190529_TIIACLIENT_H_
#define TENCENTCLOUD_TIIA_V20190529_TIIACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tiia/v20190529/model/AssessQualityRequest.h>
#include <tencentcloud/tiia/v20190529/model/AssessQualityResponse.h>
#include <tencentcloud/tiia/v20190529/model/CreateGroupRequest.h>
#include <tencentcloud/tiia/v20190529/model/CreateGroupResponse.h>
#include <tencentcloud/tiia/v20190529/model/CreateImageRequest.h>
#include <tencentcloud/tiia/v20190529/model/CreateImageResponse.h>
#include <tencentcloud/tiia/v20190529/model/CropImageRequest.h>
#include <tencentcloud/tiia/v20190529/model/CropImageResponse.h>
#include <tencentcloud/tiia/v20190529/model/DeleteImagesRequest.h>
#include <tencentcloud/tiia/v20190529/model/DeleteImagesResponse.h>
#include <tencentcloud/tiia/v20190529/model/DescribeGroupsRequest.h>
#include <tencentcloud/tiia/v20190529/model/DescribeGroupsResponse.h>
#include <tencentcloud/tiia/v20190529/model/DescribeImagesRequest.h>
#include <tencentcloud/tiia/v20190529/model/DescribeImagesResponse.h>
#include <tencentcloud/tiia/v20190529/model/DetectCelebrityRequest.h>
#include <tencentcloud/tiia/v20190529/model/DetectCelebrityResponse.h>
#include <tencentcloud/tiia/v20190529/model/DetectDisgustRequest.h>
#include <tencentcloud/tiia/v20190529/model/DetectDisgustResponse.h>
#include <tencentcloud/tiia/v20190529/model/DetectLabelRequest.h>
#include <tencentcloud/tiia/v20190529/model/DetectLabelResponse.h>
#include <tencentcloud/tiia/v20190529/model/DetectLabelBetaRequest.h>
#include <tencentcloud/tiia/v20190529/model/DetectLabelBetaResponse.h>
#include <tencentcloud/tiia/v20190529/model/DetectMisbehaviorRequest.h>
#include <tencentcloud/tiia/v20190529/model/DetectMisbehaviorResponse.h>
#include <tencentcloud/tiia/v20190529/model/DetectProductRequest.h>
#include <tencentcloud/tiia/v20190529/model/DetectProductResponse.h>
#include <tencentcloud/tiia/v20190529/model/DetectProductBetaRequest.h>
#include <tencentcloud/tiia/v20190529/model/DetectProductBetaResponse.h>
#include <tencentcloud/tiia/v20190529/model/EnhanceImageRequest.h>
#include <tencentcloud/tiia/v20190529/model/EnhanceImageResponse.h>
#include <tencentcloud/tiia/v20190529/model/RecognizeCarRequest.h>
#include <tencentcloud/tiia/v20190529/model/RecognizeCarResponse.h>
#include <tencentcloud/tiia/v20190529/model/RecognizeCarProRequest.h>
#include <tencentcloud/tiia/v20190529/model/RecognizeCarProResponse.h>
#include <tencentcloud/tiia/v20190529/model/SearchImageRequest.h>
#include <tencentcloud/tiia/v20190529/model/SearchImageResponse.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            class TiiaClient : public AbstractClient
            {
            public:
                TiiaClient(const Credential &credential, const std::string &region);
                TiiaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssessQualityResponse> AssessQualityOutcome;
                typedef std::future<AssessQualityOutcome> AssessQualityOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::AssessQualityRequest&, AssessQualityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssessQualityAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGroupResponse> CreateGroupOutcome;
                typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::CreateGroupRequest&, CreateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageResponse> CreateImageOutcome;
                typedef std::future<CreateImageOutcome> CreateImageOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::CreateImageRequest&, CreateImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAsyncHandler;
                typedef Outcome<Core::Error, Model::CropImageResponse> CropImageOutcome;
                typedef std::future<CropImageOutcome> CropImageOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::CropImageRequest&, CropImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CropImageAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImagesResponse> DeleteImagesOutcome;
                typedef std::future<DeleteImagesOutcome> DeleteImagesOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::DeleteImagesRequest&, DeleteImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupsResponse> DescribeGroupsOutcome;
                typedef std::future<DescribeGroupsOutcome> DescribeGroupsOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::DescribeGroupsRequest&, DescribeGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImagesResponse> DescribeImagesOutcome;
                typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::DescribeImagesRequest&, DescribeImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectCelebrityResponse> DetectCelebrityOutcome;
                typedef std::future<DetectCelebrityOutcome> DetectCelebrityOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::DetectCelebrityRequest&, DetectCelebrityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectCelebrityAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectDisgustResponse> DetectDisgustOutcome;
                typedef std::future<DetectDisgustOutcome> DetectDisgustOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::DetectDisgustRequest&, DetectDisgustOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectDisgustAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectLabelResponse> DetectLabelOutcome;
                typedef std::future<DetectLabelOutcome> DetectLabelOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::DetectLabelRequest&, DetectLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectLabelBetaResponse> DetectLabelBetaOutcome;
                typedef std::future<DetectLabelBetaOutcome> DetectLabelBetaOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::DetectLabelBetaRequest&, DetectLabelBetaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectLabelBetaAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectMisbehaviorResponse> DetectMisbehaviorOutcome;
                typedef std::future<DetectMisbehaviorOutcome> DetectMisbehaviorOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::DetectMisbehaviorRequest&, DetectMisbehaviorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectMisbehaviorAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectProductResponse> DetectProductOutcome;
                typedef std::future<DetectProductOutcome> DetectProductOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::DetectProductRequest&, DetectProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectProductBetaResponse> DetectProductBetaOutcome;
                typedef std::future<DetectProductBetaOutcome> DetectProductBetaOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::DetectProductBetaRequest&, DetectProductBetaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectProductBetaAsyncHandler;
                typedef Outcome<Core::Error, Model::EnhanceImageResponse> EnhanceImageOutcome;
                typedef std::future<EnhanceImageOutcome> EnhanceImageOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::EnhanceImageRequest&, EnhanceImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnhanceImageAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeCarResponse> RecognizeCarOutcome;
                typedef std::future<RecognizeCarOutcome> RecognizeCarOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::RecognizeCarRequest&, RecognizeCarOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeCarAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeCarProResponse> RecognizeCarProOutcome;
                typedef std::future<RecognizeCarProOutcome> RecognizeCarProOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::RecognizeCarProRequest&, RecognizeCarProOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeCarProAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchImageResponse> SearchImageOutcome;
                typedef std::future<SearchImageOutcome> SearchImageOutcomeCallable;
                typedef std::function<void(const TiiaClient*, const Model::SearchImageRequest&, SearchImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchImageAsyncHandler;



                /**
                 *评估输入图片在视觉上的质量，从多个方面评估，并同时给出综合的、客观的清晰度评分，和主观的美观度评分。
>     
- 公共参数中的签名方式必须指定为V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req AssessQualityRequest
                 * @return AssessQualityOutcome
                 */
                AssessQualityOutcome AssessQuality(const Model::AssessQualityRequest &request);
                void AssessQualityAsync(const Model::AssessQualityRequest& request, const AssessQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssessQualityOutcomeCallable AssessQualityCallable(const Model::AssessQualityRequest& request);

                /**
                 *用于创建一个空的图片库，如果图片库已存在则返回错误。不同类型图库对应不同的图像搜索服务，根据输入参数GroupType区分。

| 服务类型 | GroupType参数值 |功能描述 |
|  :------  | :----- |:-----------------  |
| 相同图像搜索<img width=30/>    | 4 |在自建图库中搜索相同原图，可支持裁剪、翻转、调色、加水印后的图片搜索，适用于图片版权保护、原图查询等场景。|
| 商品图像搜索<img width=30/>   | 5 |在自建图库中搜索相同或相似的商品图片，适用于商品分类、检索、推荐等电商场景。|
| 相似图像搜索<img width=30/>   | 6 |在自建图片库中搜索与输入图片高度相似的图片，适用于相似图案、logo、纹理等图像元素的搜索。|

                 * @param req CreateGroupRequest
                 * @return CreateGroupOutcome
                 */
                CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest &request);
                void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request);

                /**
                 *创建图片，并添加对应图片的自定义信息。
                 * @param req CreateImageRequest
                 * @return CreateImageOutcome
                 */
                CreateImageOutcome CreateImage(const Model::CreateImageRequest &request);
                void CreateImageAsync(const Model::CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageOutcomeCallable CreateImageCallable(const Model::CreateImageRequest& request);

                /**
                 *根据输入的裁剪比例，智能判断一张图片的最佳裁剪区域，确保原图的主体区域不受影响。

可以自动裁剪图片，适应不同平台、设备的展示要求，避免简单拉伸带来的变形。
>     
- 公共参数中的签名方式必须指定为V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req CropImageRequest
                 * @return CropImageOutcome
                 */
                CropImageOutcome CropImage(const Model::CropImageRequest &request);
                void CropImageAsync(const Model::CropImageRequest& request, const CropImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CropImageOutcomeCallable CropImageCallable(const Model::CropImageRequest& request);

                /**
                 *删除图片。
                 * @param req DeleteImagesRequest
                 * @return DeleteImagesOutcome
                 */
                DeleteImagesOutcome DeleteImages(const Model::DeleteImagesRequest &request);
                void DeleteImagesAsync(const Model::DeleteImagesRequest& request, const DeleteImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImagesOutcomeCallable DeleteImagesCallable(const Model::DeleteImagesRequest& request);

                /**
                 *查询所有的图库信息。
                 * @param req DescribeGroupsRequest
                 * @return DescribeGroupsOutcome
                 */
                DescribeGroupsOutcome DescribeGroups(const Model::DescribeGroupsRequest &request);
                void DescribeGroupsAsync(const Model::DescribeGroupsRequest& request, const DescribeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupsOutcomeCallable DescribeGroupsCallable(const Model::DescribeGroupsRequest& request);

                /**
                 *获取指定图片库中的图片列表。
                 * @param req DescribeImagesRequest
                 * @return DescribeImagesOutcome
                 */
                DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest &request);
                void DescribeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImagesOutcomeCallable DescribeImagesCallable(const Model::DescribeImagesRequest& request);

                /**
                 *传入一张图片，可以识别图片中包含的人物是否为公众人物，如果是，输出人物的姓名、基本信息、脸部坐标。

支持识别一张图片中存在的多个人脸，针对每个人脸，会给出与之最相似的公众人物。
>     
- 公共参数中的签名方式必须指定为V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req DetectCelebrityRequest
                 * @return DetectCelebrityOutcome
                 */
                DetectCelebrityOutcome DetectCelebrity(const Model::DetectCelebrityRequest &request);
                void DetectCelebrityAsync(const Model::DetectCelebrityRequest& request, const DetectCelebrityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectCelebrityOutcomeCallable DetectCelebrityCallable(const Model::DetectCelebrityRequest& request);

                /**
                 *输入一张图片，返回AI针对一张图片是否是恶心的一系列判断值。

通过恶心图片识别, 可以判断一张图片是否令人恶心, 同时给出它属于的潜在类别, 让您能够过滤掉使人不愉快的图片。
>     
- 公共参数中的签名方式必须指定为V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req DetectDisgustRequest
                 * @return DetectDisgustOutcome
                 */
                DetectDisgustOutcome DetectDisgust(const Model::DetectDisgustRequest &request);
                void DetectDisgustAsync(const Model::DetectDisgustRequest& request, const DetectDisgustAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectDisgustOutcomeCallable DetectDisgustCallable(const Model::DetectDisgustRequest& request);

                /**
                 *图像标签利用深度学习技术，可以对图片进行智能分类、物体识别等。

目前支持8个大类、六十多个子类、数千个标签。涵盖各种日常场景、动植物、物品、美食、卡证等。具体分类请见[图像分析常见问题功能与限制相关](https://cloud.tencent.com/document/product/865/39164)。

图像标签提供四个版本供选择：

• 摄像头版：针对搜索、手机摄像头照片进行优化，涵盖大量卡证、日常物品、二维码条形码。

• 相册版：针对手机相册、网盘进行优化，去除相册和网盘中不常见的标签，针对相册常见图片类型（人像、日常活动、日常物品等）识别效果更好。

• 网络版：针对网络图片进行优化，涵盖标签更多，满足长尾识别需求。

• 新闻版：针对新闻、资讯、广电等行业进行优化，增加定制识别，支持万级图像标签。

每个产品的图像类型都有独特性，建议在接入初期，对四个版本进行对比评估后选择合适的版本使用。

为了方便使用、减少图片传输次数，图像标签包装成多合一接口，实际上是多个服务。

图像标签按照服务的实际使用数量进行收费。例如一张图片同时调用相册版、摄像头版两个服务，那么此次调用按照两次计费。
>     
- 公共参数中的签名方式必须指定为V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req DetectLabelRequest
                 * @return DetectLabelOutcome
                 */
                DetectLabelOutcome DetectLabel(const Model::DetectLabelRequest &request);
                void DetectLabelAsync(const Model::DetectLabelRequest& request, const DetectLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectLabelOutcomeCallable DetectLabelCallable(const Model::DetectLabelRequest& request);

                /**
                 *图像标签测试接口

>     
- 公共参数中的签名方式必须指定为V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req DetectLabelBetaRequest
                 * @return DetectLabelBetaOutcome
                 */
                DetectLabelBetaOutcome DetectLabelBeta(const Model::DetectLabelBetaRequest &request);
                void DetectLabelBetaAsync(const Model::DetectLabelBetaRequest& request, const DetectLabelBetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectLabelBetaOutcomeCallable DetectLabelBetaCallable(const Model::DetectLabelBetaRequest& request);

                /**
                 *可以识别输入的图片中是否包含不良行为，例如打架斗殴、赌博、抽烟等，可以应用于广告图、直播截图、短视频截图等审核，减少不良行为对平台内容质量的影响，维护健康向上的互联网环境。
>     
- 公共参数中的签名方式必须指定为V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req DetectMisbehaviorRequest
                 * @return DetectMisbehaviorOutcome
                 */
                DetectMisbehaviorOutcome DetectMisbehavior(const Model::DetectMisbehaviorRequest &request);
                void DetectMisbehaviorAsync(const Model::DetectMisbehaviorRequest& request, const DetectMisbehaviorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectMisbehaviorOutcomeCallable DetectMisbehaviorCallable(const Model::DetectMisbehaviorRequest& request);

                /**
                 *本接口支持识别图片中包含的商品，能够输出商品的品类名称、类别，还可以输出商品在图片中的位置。支持一张图片多个商品的识别。
>     
- 公共参数中的签名方式必须指定为V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req DetectProductRequest
                 * @return DetectProductOutcome
                 */
                DetectProductOutcome DetectProduct(const Model::DetectProductRequest &request);
                void DetectProductAsync(const Model::DetectProductRequest& request, const DetectProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectProductOutcomeCallable DetectProductCallable(const Model::DetectProductRequest& request);

                /**
                 *商品识别-微信识物版，基于人工智能技术、海量训练图片、亿级商品库，可以实现全覆盖、细粒度、高准确率的商品识别和商品推荐功能。
本服务可以识别出图片中的主体位置、主体商品类型，覆盖亿级SKU，输出具体商品的价格、型号等详细信息。
客户无需自建商品库，即可快速实现商品识别、拍照搜商品等功能。
>   
- 公共参数中的签名方式必须指定为V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req DetectProductBetaRequest
                 * @return DetectProductBetaOutcome
                 */
                DetectProductBetaOutcome DetectProductBeta(const Model::DetectProductBetaRequest &request);
                void DetectProductBetaAsync(const Model::DetectProductBetaRequest& request, const DetectProductBetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectProductBetaOutcomeCallable DetectProductBetaCallable(const Model::DetectProductBetaRequest& request);

                /**
                 *传入一张图片，输出清晰度提升后的图片。

可以消除图片有损压缩导致的噪声，和使用滤镜、拍摄失焦导致的模糊。让图片的边缘和细节更加清晰自然。
>     
- 公共参数中的签名方式必须指定为V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req EnhanceImageRequest
                 * @return EnhanceImageOutcome
                 */
                EnhanceImageOutcome EnhanceImage(const Model::EnhanceImageRequest &request);
                void EnhanceImageAsync(const Model::EnhanceImageRequest& request, const EnhanceImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnhanceImageOutcomeCallable EnhanceImageCallable(const Model::EnhanceImageRequest& request);

                /**
                 *车辆识别可对图片中车辆的车型进行识别，可识别7000多种车型，输出车辆的品牌（如路虎）、车系（如神行者2）、类型（如中型SUV）、颜色、年份和坐标等信息，覆盖轿车、SUV、大型客车等市面常见车。如果图片中存在多辆车，会分别输出每辆车的车型和坐标。

>     
- 公共参数中的签名方式必须指定为V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req RecognizeCarRequest
                 * @return RecognizeCarOutcome
                 */
                RecognizeCarOutcome RecognizeCar(const Model::RecognizeCarRequest &request);
                void RecognizeCarAsync(const Model::RecognizeCarRequest& request, const RecognizeCarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeCarOutcomeCallable RecognizeCarCallable(const Model::RecognizeCarRequest& request);

                /**
                 *车辆识别（增强版）可对图片中车辆的车型和车牌进行识别，输出车辆的车牌，以及品牌（如路虎）、车系（如神行者2）、类型（如中型SUV）、颜色和坐标等信息，覆盖轿车、SUV、大型客车等市面常见车。如果图片中存在多辆车，会分别输出每辆车的车型、车牌和坐标。

>     
- 公共参数中的签名方式必须指定为V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req RecognizeCarProRequest
                 * @return RecognizeCarProOutcome
                 */
                RecognizeCarProOutcome RecognizeCarPro(const Model::RecognizeCarProRequest &request);
                void RecognizeCarProAsync(const Model::RecognizeCarProRequest& request, const RecognizeCarProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeCarProOutcomeCallable RecognizeCarProCallable(const Model::RecognizeCarProRequest& request);

                /**
                 *本接口用于对一张待识别的商品图片，在指定图片库中检索出最相似的图片列表。
                 * @param req SearchImageRequest
                 * @return SearchImageOutcome
                 */
                SearchImageOutcome SearchImage(const Model::SearchImageRequest &request);
                void SearchImageAsync(const Model::SearchImageRequest& request, const SearchImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchImageOutcomeCallable SearchImageCallable(const Model::SearchImageRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_TIIACLIENT_H_
