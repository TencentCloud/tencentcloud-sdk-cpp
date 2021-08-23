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

#ifndef TENCENTCLOUD_BTOE_V20210303_BTOECLIENT_H_
#define TENCENTCLOUD_BTOE_V20210303_BTOECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/btoe/v20210303/model/CreateAudioDepositRequest.h>
#include <tencentcloud/btoe/v20210303/model/CreateAudioDepositResponse.h>
#include <tencentcloud/btoe/v20210303/model/CreateDataDepositRequest.h>
#include <tencentcloud/btoe/v20210303/model/CreateDataDepositResponse.h>
#include <tencentcloud/btoe/v20210303/model/CreateDocDepositRequest.h>
#include <tencentcloud/btoe/v20210303/model/CreateDocDepositResponse.h>
#include <tencentcloud/btoe/v20210303/model/CreateHashDepositRequest.h>
#include <tencentcloud/btoe/v20210303/model/CreateHashDepositResponse.h>
#include <tencentcloud/btoe/v20210303/model/CreateHashDepositNoCertRequest.h>
#include <tencentcloud/btoe/v20210303/model/CreateHashDepositNoCertResponse.h>
#include <tencentcloud/btoe/v20210303/model/CreateHashDepositNoSealRequest.h>
#include <tencentcloud/btoe/v20210303/model/CreateHashDepositNoSealResponse.h>
#include <tencentcloud/btoe/v20210303/model/CreateImageDepositRequest.h>
#include <tencentcloud/btoe/v20210303/model/CreateImageDepositResponse.h>
#include <tencentcloud/btoe/v20210303/model/CreateVideoDepositRequest.h>
#include <tencentcloud/btoe/v20210303/model/CreateVideoDepositResponse.h>
#include <tencentcloud/btoe/v20210303/model/CreateWebpageDepositRequest.h>
#include <tencentcloud/btoe/v20210303/model/CreateWebpageDepositResponse.h>
#include <tencentcloud/btoe/v20210303/model/GetDepositCertRequest.h>
#include <tencentcloud/btoe/v20210303/model/GetDepositCertResponse.h>
#include <tencentcloud/btoe/v20210303/model/GetDepositFileRequest.h>
#include <tencentcloud/btoe/v20210303/model/GetDepositFileResponse.h>
#include <tencentcloud/btoe/v20210303/model/GetDepositInfoRequest.h>
#include <tencentcloud/btoe/v20210303/model/GetDepositInfoResponse.h>


namespace TencentCloud
{
    namespace Btoe
    {
        namespace V20210303
        {
            class BtoeClient : public AbstractClient
            {
            public:
                BtoeClient(const Credential &credential, const std::string &region);
                BtoeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAudioDepositResponse> CreateAudioDepositOutcome;
                typedef std::future<CreateAudioDepositOutcome> CreateAudioDepositOutcomeCallable;
                typedef std::function<void(const BtoeClient*, const Model::CreateAudioDepositRequest&, CreateAudioDepositOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAudioDepositAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDataDepositResponse> CreateDataDepositOutcome;
                typedef std::future<CreateDataDepositOutcome> CreateDataDepositOutcomeCallable;
                typedef std::function<void(const BtoeClient*, const Model::CreateDataDepositRequest&, CreateDataDepositOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataDepositAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDocDepositResponse> CreateDocDepositOutcome;
                typedef std::future<CreateDocDepositOutcome> CreateDocDepositOutcomeCallable;
                typedef std::function<void(const BtoeClient*, const Model::CreateDocDepositRequest&, CreateDocDepositOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDocDepositAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHashDepositResponse> CreateHashDepositOutcome;
                typedef std::future<CreateHashDepositOutcome> CreateHashDepositOutcomeCallable;
                typedef std::function<void(const BtoeClient*, const Model::CreateHashDepositRequest&, CreateHashDepositOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHashDepositAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHashDepositNoCertResponse> CreateHashDepositNoCertOutcome;
                typedef std::future<CreateHashDepositNoCertOutcome> CreateHashDepositNoCertOutcomeCallable;
                typedef std::function<void(const BtoeClient*, const Model::CreateHashDepositNoCertRequest&, CreateHashDepositNoCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHashDepositNoCertAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHashDepositNoSealResponse> CreateHashDepositNoSealOutcome;
                typedef std::future<CreateHashDepositNoSealOutcome> CreateHashDepositNoSealOutcomeCallable;
                typedef std::function<void(const BtoeClient*, const Model::CreateHashDepositNoSealRequest&, CreateHashDepositNoSealOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHashDepositNoSealAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageDepositResponse> CreateImageDepositOutcome;
                typedef std::future<CreateImageDepositOutcome> CreateImageDepositOutcomeCallable;
                typedef std::function<void(const BtoeClient*, const Model::CreateImageDepositRequest&, CreateImageDepositOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageDepositAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVideoDepositResponse> CreateVideoDepositOutcome;
                typedef std::future<CreateVideoDepositOutcome> CreateVideoDepositOutcomeCallable;
                typedef std::function<void(const BtoeClient*, const Model::CreateVideoDepositRequest&, CreateVideoDepositOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoDepositAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWebpageDepositResponse> CreateWebpageDepositOutcome;
                typedef std::future<CreateWebpageDepositOutcome> CreateWebpageDepositOutcomeCallable;
                typedef std::function<void(const BtoeClient*, const Model::CreateWebpageDepositRequest&, CreateWebpageDepositOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebpageDepositAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDepositCertResponse> GetDepositCertOutcome;
                typedef std::future<GetDepositCertOutcome> GetDepositCertOutcomeCallable;
                typedef std::function<void(const BtoeClient*, const Model::GetDepositCertRequest&, GetDepositCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDepositCertAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDepositFileResponse> GetDepositFileOutcome;
                typedef std::future<GetDepositFileOutcome> GetDepositFileOutcomeCallable;
                typedef std::function<void(const BtoeClient*, const Model::GetDepositFileRequest&, GetDepositFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDepositFileAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDepositInfoResponse> GetDepositInfoOutcome;
                typedef std::future<GetDepositInfoOutcome> GetDepositInfoOutcomeCallable;
                typedef std::function<void(const BtoeClient*, const Model::GetDepositInfoRequest&, GetDepositInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDepositInfoAsyncHandler;



                /**
                 *功能迭代，已上线更高版本的接口2021-05-14

用户通过本接口向BTOE写入待存证的音频原文件或下载URL，BTOE对音频原文件存储后，将其Hash值存证上链，并生成含有电子签章的区块链存证电子凭证。音频类型支持格式：mp3、wav、wma、midi、flac；原文件上传大小不超过5 MB，下载URL文件大小不超过25 MB。
                 * @param req CreateAudioDepositRequest
                 * @return CreateAudioDepositOutcome
                 */
                CreateAudioDepositOutcome CreateAudioDeposit(const Model::CreateAudioDepositRequest &request);
                void CreateAudioDepositAsync(const Model::CreateAudioDepositRequest& request, const CreateAudioDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAudioDepositOutcomeCallable CreateAudioDepositCallable(const Model::CreateAudioDepositRequest& request);

                /**
                 *功能迭代，已上线更高版本的接口2021-05-14

用户通过本接口向BTOE写入待存证的业务数据明文，业务数据明文存证写入后不可修改，BTOE对业务数据明文存证生成含有电子签章的区块链存证电子凭证。
                 * @param req CreateDataDepositRequest
                 * @return CreateDataDepositOutcome
                 */
                CreateDataDepositOutcome CreateDataDeposit(const Model::CreateDataDepositRequest &request);
                void CreateDataDepositAsync(const Model::CreateDataDepositRequest& request, const CreateDataDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDataDepositOutcomeCallable CreateDataDepositCallable(const Model::CreateDataDepositRequest& request);

                /**
                 *功能迭代，已上线更高版本的接口2021-05-14

用户通过本接口向BTOE写入待存证的文档原文件或下载URL，BTOE对文档原文件存储后，将其Hash值存证上链，并生成含有电子签章的区块链存证电子凭证。文档类型支持格式：doc、docx、xls、xlsx、ppt、pptx、 pdf、html、txt、md、csv；原文件上传大小不超过5 MB，下载URL文件大小不超过10 MB。
                 * @param req CreateDocDepositRequest
                 * @return CreateDocDepositOutcome
                 */
                CreateDocDepositOutcome CreateDocDeposit(const Model::CreateDocDepositRequest &request);
                void CreateDocDepositAsync(const Model::CreateDocDepositRequest& request, const CreateDocDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDocDepositOutcomeCallable CreateDocDepositCallable(const Model::CreateDocDepositRequest& request);

                /**
                 *功能迭代，已上线更高版本的接口2021-05-14

用户通过本接口向BTOE写入待存证的原文数据Hash值，BTOE对业务数据Hash值存证上链，并生成含有电子签章的区块链存证电子凭证。
                 * @param req CreateHashDepositRequest
                 * @return CreateHashDepositOutcome
                 */
                CreateHashDepositOutcome CreateHashDeposit(const Model::CreateHashDepositRequest &request);
                void CreateHashDepositAsync(const Model::CreateHashDepositRequest& request, const CreateHashDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHashDepositOutcomeCallable CreateHashDepositCallable(const Model::CreateHashDepositRequest& request);

                /**
                 *功能迭代，已上线更高版本的接口2021-05-14

用户通过本接口向BTOE写入待存证的原文数据Hash值，BTOE对业务数据Hash值存证上链，本接口不生成区块链存证电子凭证。
                 * @param req CreateHashDepositNoCertRequest
                 * @return CreateHashDepositNoCertOutcome
                 */
                CreateHashDepositNoCertOutcome CreateHashDepositNoCert(const Model::CreateHashDepositNoCertRequest &request);
                void CreateHashDepositNoCertAsync(const Model::CreateHashDepositNoCertRequest& request, const CreateHashDepositNoCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHashDepositNoCertOutcomeCallable CreateHashDepositNoCertCallable(const Model::CreateHashDepositNoCertRequest& request);

                /**
                 *功能迭代，已上线更高版本的接口2021-05-14

用户通过本接口向BTOE写入待存证的原文数据Hash值，BTOE对业务数据Hash值存证上链，并生成无电子签章的区块链存证电子凭证。
                 * @param req CreateHashDepositNoSealRequest
                 * @return CreateHashDepositNoSealOutcome
                 */
                CreateHashDepositNoSealOutcome CreateHashDepositNoSeal(const Model::CreateHashDepositNoSealRequest &request);
                void CreateHashDepositNoSealAsync(const Model::CreateHashDepositNoSealRequest& request, const CreateHashDepositNoSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHashDepositNoSealOutcomeCallable CreateHashDepositNoSealCallable(const Model::CreateHashDepositNoSealRequest& request);

                /**
                 *功能迭代，已上线更高版本的接口2021-05-14

用户通过本接口向BTOE写入待存证的图片原文件或下载URL，BTOE对图片原文件存储后，将其Hash值存证上链，并生成含有电子签章的区块链存证电子凭证。图片类型支持格式：png、jpg、jpeg、bmp、gif、svg；原文件上传大小不超过5 MB，下载URL文件大小不超过10 MB。
                 * @param req CreateImageDepositRequest
                 * @return CreateImageDepositOutcome
                 */
                CreateImageDepositOutcome CreateImageDeposit(const Model::CreateImageDepositRequest &request);
                void CreateImageDepositAsync(const Model::CreateImageDepositRequest& request, const CreateImageDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageDepositOutcomeCallable CreateImageDepositCallable(const Model::CreateImageDepositRequest& request);

                /**
                 *功能迭代，已上线更高版本的接口2021-05-14

用户通过本接口向BTOE写入待存证的视频的原文件或下载URL，BTOE对视频原文件存储后，将其Hash值存证上链，并生成含有电子签章的区块链存证电子凭证。视频文件支持格式：mp4、avi、mkv、mov、flv,wmv,rmvb,3gp；文件大小限制：直接上传原文件不大于5MB，下载URL文件大小不大于200 MB。
                 * @param req CreateVideoDepositRequest
                 * @return CreateVideoDepositOutcome
                 */
                CreateVideoDepositOutcome CreateVideoDeposit(const Model::CreateVideoDepositRequest &request);
                void CreateVideoDepositAsync(const Model::CreateVideoDepositRequest& request, const CreateVideoDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVideoDepositOutcomeCallable CreateVideoDepositCallable(const Model::CreateVideoDepositRequest& request);

                /**
                 *功能迭代，已上线更高版本的接口2021-05-14

用户通过本接口向BTOE提交待存证网页的URL，BTOE对URL进行网页快照，并将快照图片存储，将网页快照Hash值存证上链，并生成含有电子签章的区块链存证电子凭证。URL格式必须以http、https开头。
                 * @param req CreateWebpageDepositRequest
                 * @return CreateWebpageDepositOutcome
                 */
                CreateWebpageDepositOutcome CreateWebpageDeposit(const Model::CreateWebpageDepositRequest &request);
                void CreateWebpageDepositAsync(const Model::CreateWebpageDepositRequest& request, const CreateWebpageDepositAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWebpageDepositOutcomeCallable CreateWebpageDepositCallable(const Model::CreateWebpageDepositRequest& request);

                /**
                 *功能迭代，已上线更高版本的接口2021-05-14

用户通过存证编码向BTOE查询存证电子凭证信息。
                 * @param req GetDepositCertRequest
                 * @return GetDepositCertOutcome
                 */
                GetDepositCertOutcome GetDepositCert(const Model::GetDepositCertRequest &request);
                void GetDepositCertAsync(const Model::GetDepositCertRequest& request, const GetDepositCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDepositCertOutcomeCallable GetDepositCertCallable(const Model::GetDepositCertRequest& request);

                /**
                 *功能迭代，已上线更高版本的接口2021-05-14

用户通过存证编码向BTOE获取存证文件的下载URL。
-注：Hash类存证、业务数据明文存证不产生存证文件。
                 * @param req GetDepositFileRequest
                 * @return GetDepositFileOutcome
                 */
                GetDepositFileOutcome GetDepositFile(const Model::GetDepositFileRequest &request);
                void GetDepositFileAsync(const Model::GetDepositFileRequest& request, const GetDepositFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDepositFileOutcomeCallable GetDepositFileCallable(const Model::GetDepositFileRequest& request);

                /**
                 *功能迭代，已上线更高版本的接口2021-05-14

用户通过存证编码向BTOE查询存证基本信息。
                 * @param req GetDepositInfoRequest
                 * @return GetDepositInfoOutcome
                 */
                GetDepositInfoOutcome GetDepositInfo(const Model::GetDepositInfoRequest &request);
                void GetDepositInfoAsync(const Model::GetDepositInfoRequest& request, const GetDepositInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDepositInfoOutcomeCallable GetDepositInfoCallable(const Model::GetDepositInfoRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BTOE_V20210303_BTOECLIENT_H_
